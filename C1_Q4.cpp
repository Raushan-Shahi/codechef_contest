#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n], flag = 0;

        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
        {
            float check = 0;
            for (int j = i+1; j < n; j++)
            {
                check = (float(a[i]) + float(a[j])) / 2;
                for (int k = 0; k < n; k++)
                {
                    if (check == a[k])
                        flag = 1;
                }
            }
        }
        if (flag == 1)
            cout << "NO"<<endl;
        else
            cout << "YES"<<endl;
    }
}