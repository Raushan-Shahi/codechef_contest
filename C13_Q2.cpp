#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y;
        cin >> x >> y;
        int space = x - 1;
        if (x == y)
            cout << "1" << endl;
        else if (space == y)
            cout << "1" << endl;
        else if (x < y)
            cout << y / space << endl;
        else
            cout << "0" << endl;
    }

    return 0;
}