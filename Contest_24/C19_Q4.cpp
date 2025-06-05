#include <iostream>
#include <bits/stdc++.h>
using namespace std;

long long func(long long n)
{
    return (n * (n - 1)) / 2;
}

int main()
{
    long long t;
    cin >> t;
    while (t--)
    {
        long long n;
        cin >> n;
        vector<long long> v;
        for (long long i = 0; i < (2 * n); i++)
        {
            long long a;
            cin >> a;
            if (i % 2 != 0)
                v.push_back(a);
        }
        long long zero_count = n, max_count = 0;
        long long res = 0, temp=0, temp2=0;
        unordered_map<long long, long long> mp;
        for (int i = 0; i < n; i++)
        {
            mp[v[i]]++;
            if (mp[v[i]] > 1)
                res += func(mp[v[i]]) - func(mp[v[i]] - 1);
            zero_count--;
             max_count = max(max_count, mp[v[i]]);
            
            cout << res+func(zero_count+max_count)-func(max_count) << " ";
        }
        cout << endl;
    }

    return 0;
}