#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, r;
        cin >> x >> y >> r;
        int temp = r / 30;
        if((x + temp) % y !=0)
            cout << ((x + temp) / y) + 1 << endl;
        else
            cout << ((x + temp) / y) << endl;
    }

    return 0;
}