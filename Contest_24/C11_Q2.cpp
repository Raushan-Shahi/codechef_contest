#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int count_subarrays_with_odd_or(int N, int K, const vector<int> &A)
{
    int count = 0;
    int oddCount = 0;

    for (int i = 0; i < K; ++i)
    {
        if (A[i] % 2 == 1)
        {
            oddCount++;
        }
    }

    if (oddCount > 0)
    {
        count++;
    }

    for (int i = K; i < N; ++i)
    {
        if (A[i] % 2 == 1)
        {
            oddCount++;
        }
        if (A[i - K] % 2 == 1)
        {
            oddCount--;
        }

        if (oddCount > 0)
        {
            count++;
        }
    }

    return count;
}

int main()
{
    int t;
    cin >> t;

    for (int i = 0; i < t; ++i)
    {
        int N, K;
        cin >> N >> K;

        vector<int> A(N);
        for (int i = 0; i < N; ++i)
        {
            cin >> A[i];
        }

        int result = count_subarrays_with_odd_or(N, K, A);
        cout << result << endl;
    }

    return 0;
}
