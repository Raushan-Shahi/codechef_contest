#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int ind, int n, int arr[], vector<int> v, int multi, int shorty, int maxi)
{
    if (ind == n)
        return;

    multi *= arr[ind];
    v.push_back(multi);
    sort(v.begin(), v.end());
    shorty = v[0];
    func(ind + 1, n, arr, v, multi, shorty, maxi);
    multi /= arr[ind];
    func(ind + 1, n, arr, v, multi, shorty, maxi);
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        vector<int> v;
        int shorty, maxi;
        int shorty = func(0, n, arr, v, 1, shorty, maxi);
    }
    return 0;
}