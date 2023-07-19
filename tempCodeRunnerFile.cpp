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
        {
            int score = 0;

            for (int k = 0; k < n; k++)
                temp[i] = arr[i];

            for (int j = i; j < n; j++)
            {
                sort(temp.begin(), temp.begin() + j-1);
                cout << temp[j] << endl;
                score += temp[j];
                temp[j] = 0;
            }
            v.push_back(score);
        }

        for (int i = 0; i < n; i++)
            cout << v[i] << " ";
        cout << endl;
    }

    return 0;
}