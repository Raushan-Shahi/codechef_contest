#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long mod = 1000000007;
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;
        long long count = 0;
        for (int i = 0; i < (n - 2); i++)
        {
            for (int j = i + 1; j < n - 1; j++)
            {
                for (int k = j + 1; k < n; k++)
                {
                    if (s[i] == '4' && (s[j] == '0' || s[j] == '*') && s[k] == '4')
                        count = count + 1;
                    if ((s[i] == '4' || s[j] == '4') && (s[j] == '0') && s[k] == '4')
                        count = count + 1;
                }
            }
        }
        cout << count % mod << endl;
    }

    return 0;
}