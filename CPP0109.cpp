#include <iostream>
#include <vector>

using namespace std;

bool isBalanced(int num, int N) {
    int evenCount = 0, oddCount = 0;

    while (num > 0) {
        int digit = num % 10;
        if (digit % 2 == 0)
            evenCount++;
        else
            oddCount++;
        num /= 10;
    }

    return evenCount == oddCount;
}

void listBalancedNumbers(int N) {
    int start = 1;

    for (int i = 1; i < N; ++i) 
        start *= 10;

    int end = start * 10 - 1;

    vector<int> balancedNumbers;

    for (int num = start; num <= end; ++num) 
        if (isBalanced(num, N)) 
            balancedNumbers.push_back(num);

    int count = 0;
    for (int num : balancedNumbers) {
        cout << num << " ";
        ++count;
        if (count % 10 == 0) 
            cout << endl;
    }
}

int main() {
    int N;
    cin >> N;

    listBalancedNumbers(N);

    return 0;
}
