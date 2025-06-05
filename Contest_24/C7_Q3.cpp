#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        int num[m];
        int sum = 0;
        for (int i = 0; i < m; i++)
            cin >> num[i];
        for (int i = 0; i < m; i++)
            sum = sum + num[i];

        int res = n * (m - 1);
        if (res > sum)
            cout << "0" << endl;
        else
            cout << sum - res << endl;
    }
    return 0;
}