#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, ans;
        cin >> n;
        if (n % 7 >= 2)
            ans = ((n / 7) + 1);
        else
            ans = n / 7;
        cout << ans << endl;
    }
    return 0;
}