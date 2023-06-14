#include <iostream>
#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        int a[n], b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];
        int x = 0, y = 0, count_a = 0, count_b = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0)
                count_a++;
            else if (a[i] == 0)
                count_a = 0;
            if (b[i] != 0)
                count_b++;
            else if (b[i] == 0)
                count_b = 0;
            x = max(x, count_a);
            y = max(y, count_b);
        }
        if (x > y)
            cout << "OM" << endl;
        else if (x < y)
            cout << "ADDY" << endl;
        else
            cout << "DRAW" << endl;
    }

    return 0;
}