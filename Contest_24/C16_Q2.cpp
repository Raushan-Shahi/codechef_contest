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
        string s;
        cin >> s;
        int check = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i] != s[i - 1])
                check++;
        }
        if (check % 2 == 0)
            cout << check/2 << endl;
        else
            cout << (check+1)/2 << endl;
    }

    return 0;
}