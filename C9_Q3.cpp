#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, h, x = 0;
        cin >> n >> h;
        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            int temp;
            cin >> temp;
            v.push_back(temp);
        }

        sort(v.begin(), v.end());

        for (int i = n - 1; i >= 0; i--)
        {
            if (i == 0 && h > v[i])
            {
                x = 0;
                break;
            }

            if (h <= v[i])
            {
                x = v[i];
                break;
            }

            else
                h -= v[i];
        }
        cout << x << endl;
    }

    return 0;
}