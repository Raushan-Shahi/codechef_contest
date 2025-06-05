#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int largestEvenSumSubarraySize(vector<int>& arr) {
    int n = arr.size();
    int sum = 0;
    int maxLength = 0;
    
    for (int i = 0; i < n; i++) {
        sum += arr[i];
    }
    
    if (sum % 2 == 0) {
        return n;
    }

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 != 0) {
            maxLength = max(maxLength, max(i, n - i - 1));
        }
    }
    
    return maxLength;
}

int main() {
    int T;
    cin >> T;
    
    while (T--) {
        int N;
        cin >> N;
        
        vector<int> A(N);
        for (int i = 0; i < N; i++) {
            cin >> A[i];
        }
        
        int result = largestEvenSumSubarraySize(A);
        cout << result << endl;
    }
    
    return 0;
}
