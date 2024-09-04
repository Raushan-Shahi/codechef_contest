#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, x;
        cin >> a >> b >> x;

        if (x * x >= a * b)
            cout << 0 << endl;
        else if (x == 1 && a * b > 1)
            cout << 2 << endl;
        else if (x == 2 && a * b > 16)
            cout << 2 << endl;
        else if (x == 3 && a * b > 81)
            cout << 2 << endl;
        else
            cout << 1 << endl;
    }

    return 0;
}