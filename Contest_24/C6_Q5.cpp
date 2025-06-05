#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> triplet_array(vector<int> arr)
{
    vector<int> result;
    for (int i = 0; i < arr.size() - 2; i++)
    {
        for (int j = i + 1; j < arr.size() - 1; j++)
        {
            for (int k = j + 1; k < arr.size(); k++)
            {
                result.push_back(min(arr[i], min(arr[j], arr[k])));
            }
        }
    }
    sort(result.begin(), result.end());
    return result;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, q;
        cin >> n >> q;
        vector<int> arr;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        
        int query[q];
        for (int i = 0; i < q; i++)
            cin >> query[i];

        vector<int> result = triplet_array(arr);
        for (int i = 0; i < q; i++)
        {
            if (query[i] > n)
                cout << result[n - 1] << endl;
            else
                cout << result[query[i] - 1] << endl;
        }
    }
    return 0;
}