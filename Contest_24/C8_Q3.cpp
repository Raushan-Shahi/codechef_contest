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

        vector<int> arr(n);
        vector<int> temp(n);

        for (int i = 0; i < n; i++)
            cin >> arr[i];

        vector<int> v(n, 0);

        for (int i = 0; i < n; i++)
            v[0]+=arr[i];


        for (int i = 1; i < n; i++)
        {
            for (int k = 0; k < n; k++)
                temp[k] = arr[k];

            for (int j = i; j < n; j++)
            {
                partial_sort(temp.begin(), temp.begin() + j, temp.end());
                v[i] += temp[j];
                temp[j] = 0;
            }
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}