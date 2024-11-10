#include <iostream>
#include <unordered_map>
#include <climits>
using namespace std;

string minWindow(string S1, string S2) {
    unordered_map<char, int> freqS2, freqWindow;
    for (char c : S2) 
        freqS2[c]++;

    int required = freqS2.size(); 
    int formed = 0; 
    int left = 0, right = 0;
    int minLength = INT_MAX;
    int minLeft = 0, minRight = 0;

    while (right < S1.length()) {
        char c = S1[right];
        freqWindow[c]++;
        
        if (freqS2.count(c) && freqWindow[c] == freqS2[c]) 
            formed++;

        while (left <= right && formed == required) {
            c = S1[left];
            if (right - left + 1 < minLength) {
                minLength = right - left + 1;
                minLeft = left;
                minRight = right;
            }

            freqWindow[c]--;
            if (freqS2.count(c) && freqWindow[c] < freqS2[c]) 
                formed--;
            left++;
        }

        right++;
    }

    if (minLength == INT_MAX) 
        return "-1";

    return S1.substr(minLeft, minLength);  
}

int main() {
    int T;
    cin >> T;
    while (T--) {
        string S1, S2;
        cin >> S1 >> S2;
        cout << minWindow(S1, S2) << endl;
    }
    return 0;
}
