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
        int a[n];
        int b[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        for (int i = 0; i < n; i++)
            cin >> b[i];

        vector<int> v;
        for (int i = 0; i < n; i++)
        {
            v.push_back(a[i]);
            v.push_back(b[i]);
        }
        sort(v.begin(), v.end());
        int maxx = 1, count = 1, check = v[0];
        for (int i = 1; i < (2 * n); i++)
        {
            if (v[i] == check)
            {
                count++;
                check = v[i];
            }
            else
            {
                maxx = max(maxx, count);
                count = 1;
                check = v[i];
            }
        }
        maxx = max(maxx,count);

        cout << maxx << endl;
    }
    return 0;
}