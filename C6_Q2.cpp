#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        vector<int> a, b;
        for (int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            a.push_back(temp);
        }
        for (int i = 0; i < 3; i++)
        {
            int temp;
            cin >> temp;
            b.push_back(temp);
        }
        sort(a.begin(), a.end());
        sort(b.begin(), b.end());
        if (a[1] + a[2] > b[1] + b[2])
            cout << "ALICE" << endl;
        else if (a[1] + a[2] < b[1] + b[2])
            cout << "BOB" << endl;
        else
            cout << "TIE" << endl;
    }

    return 0;
}