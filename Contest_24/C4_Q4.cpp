#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int flag = 0;
        int n, b;
        cin >> n >> b;
        int a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < (n - 1); i++)
        {
            for (int j = (i + 1); j < n; j++)
            {
                if ((a[i] & a[j]) == b)
                    flag = 1;
            }
        }
        if (flag == 1)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }
    return 0;
}