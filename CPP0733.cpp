#include<bits/stdc++.h>
using namespace std;

int matrix[1005][1005];
int s, t, u, v, m, n;
int dx[4] = {-1, 0, 0, 1};
int dy[4] = {0, -1, 1, 0};

long long BFS(int i, int j) {
    queue<tuple<int, int, long long>> q;
    q.push({i, j, 0});
    matrix[i][j] = 0; 

    while (!q.empty()) {
        auto [cx, cy, moves] = q.front();  
        q.pop();

        if (cx == u and cy == v) 
            return moves;

        for (int i = 0; i < 4; ++i) {
            int nx = cx + dx[i];
            int ny = cy + dy[i];

            if (nx >= 1 and nx <= n and ny >= 1 and ny <= m and matrix[nx][ny]) {
                matrix[nx][ny] = 0;  
                q.push({nx, ny, moves + 1});  
            }
        }
    }

    return -1;
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        cin >> n >> m >> s >> t >> u >> v;
        ++s, ++t, ++u, ++v;  

        for (int i = 1; i <= n; ++i) 
            for (int j = 1; j <= m; ++j) 
                cin >> matrix[i][j];
        
        if (s == u and t == v) 
            cout << 0;  
        else if (matrix[s][t] and matrix[u][v]) 
            cout << BFS(s, t);  
        else 
            cout << -1;  

        cout << endl;
    }
    return 0;
}
