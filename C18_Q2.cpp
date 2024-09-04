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
        vector<int> v;
        int count = 0, ans = 0;

        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
            count++;
        }

        if (count == n)
            ans = 0;

        else
        {
            vector<int> v1 = v;
            sort(v1.begin(), v1.end());

            int a = v1[n - 1], b = v1[n - 2], flag = 0;

            for (int i = 0; i < n; i++)
            {
                if (v[i] == a || v[i] == b && flag == 0)
                    flag == 1;
                if (v[i] == a || v[i] == b && flag == 1)
                    flag == 0;
                if (flag == 1 && v[i] < 0)
                    ans++;
            }
        }
        cout << ans << endl;
    }
    return 0;
}