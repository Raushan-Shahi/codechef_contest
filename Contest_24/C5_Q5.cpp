#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, m, h;
        cin >> n >> m >> h;
        vector<int>cars;
        for (int i = 0; i < n; i++)
        {
            int temp=0;
            cin >>temp;
            cars.push_back(temp);
        }
        vector<int>power;
        for (int i = 0; i < m; i++)
        {
            int temp=0;
            cin >>temp;
            power.push_back(temp);
        }
        sort(cars.begin(), cars.end(), greater<int>());
        sort(power.begin(), power.end(), greater<int>());
        int total = 0;
        for (int i = 0; i < min(n,m); i++)
            total += min(cars[i], (power[i]*h));
        cout << total << endl;
    }
    return 0;
}