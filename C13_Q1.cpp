#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int temp = 1 + 2 + 4 + 8 + 16 + 32 + 64;
        if (n < temp)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}