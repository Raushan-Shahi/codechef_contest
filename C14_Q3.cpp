#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long n, m, x, y, l;
        cin >> n >> m >> x >> y >> l;
        long long res;

        if (l == 1)
        {
            res = n * m;
        }
        else
        {
            long long x1 = (x - 1) / l;
            long long x2 = (n - x) / l;
            long long y1 = (y - 1) / l;
            long long y2 = (m - y) / l;
            res = (x1 + x2 + 1) * (y1 + y2 + 1);
        }
        cout << res << endl;
    }

    return 0;
}
