#include <bits/stdc++.h>

using namespace std;

int main() {
    int tc;
    cin >> tc;
    while (tc--) {
        string s1, s2, word;
        map<string, bool> mp;
        scanf("\n"); 
        getline(cin, s1);
        scanf("\n");  
        getline(cin, s2);
        stringstream ss(s2);
        
        while (ss >> word) mp[word] = true;
        
        stringstream ss1(s1);
        vector<string> res;
        
        while (ss1 >> word) {
            if (!mp[word]) {
                res.push_back(word);
                mp[word] = true;  
            }
        }

        sort(res.begin(), res.end());
        for (string word : res) cout << word << ' ';
        
        cout << endl;
    }
    return 0;
}
