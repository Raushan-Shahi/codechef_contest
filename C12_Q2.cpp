#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> v(n);
        for (int i = 0; i < n; i++)
            cin >> v[i];

        sort(v.begin(), v.end());
        int maxi = *(v.end() - 1);

        vector<int> sum;

        for (int i = 0; i < n; i++)
            sum.push_back(maxi - v[i]);

        sort(sum.begin(), sum.end(), greater<int>());

        int ans = 0;
        for (int i = 0; i < n; i += m)
            ans += sum[i];
    cout << ans <<endl;
    }
    return 0;
}
