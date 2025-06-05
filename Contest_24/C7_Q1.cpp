#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool divisorcheck(int x, int y, int z)
{
    if ((x * y) % z == 0)
        return 1;
    return 0;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int x, y, z;
        cin >> x >> y >> z;
        int a = 0, b = 0;
        if (divisorcheck(x, y, z) == 1)
        {
            b = z;
            a = x * y;
        }
        else if (divisorcheck(x, z, y) == 1)
        {
            b = y;
            a = x * z;
        }
        else if (divisorcheck(y, z, x) == 1)
        {
            b = x;
            a = y * z;
        }

        if (a == 0)
            cout << "-1" << endl;
        else
            cout << a << " " << b << endl;
    }
    return 0;
}