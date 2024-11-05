#include <bits/stdc++.h>

using namespace std;

int n, m, cc;
int mat[105][105];
vector<vector<bool>> visited(105, vector<bool>(105, false));

int dx[8] = {-1, 0, 1, 1, 1, 0, -1, -1};
int dy[8] = {-1, -1, -1, 0, 1, 1, 1, 0};

bool check(int x, int y) {
    return x >= 0 and x < n and y >= 0 and y < m and mat[x][y];
}

void DFS(int x, int y) {
    visited[x][y] = true;

    for (int i = 0; i < 8; ++i) {
        int nx = x + dx[i];
        int ny = y + dy[i];
        
        if (check(nx, ny) and !visited[nx][ny]) 
            DFS(nx, ny);
    }
}

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        cin >> n >> m;
        for (int i = 0; i < n; ++i)
            for (int j = 0; j < m; ++j)
                cin >> mat[i][j];

        visited = vector<vector<bool>>(n, vector<bool>(m, false));
        cc = 0;

        for (int i = 0; i < n; ++i) 
            for (int j = 0; j < m; ++j) 
                if (mat[i][j] && !visited[i][j]) {
                    ++cc;
                    DFS(i, j);
                }
                
        cout << cc << endl;
    }
    return 0;
}
