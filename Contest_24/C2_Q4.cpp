#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int x;
        cin >> x;
        if (x % 2 != 0)
            cout << -1;
        else
        {
            for (int i = x; i > 0; i--)
            {
                cout << i;
            }
        }
        cout << endl;
    }

    return 0;
}