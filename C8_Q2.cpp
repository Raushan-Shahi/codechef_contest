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
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int temp = 0;
        for (int i = 0; i < n; i++)
        {
            temp = max(temp, arr[i]);
        }
        cout << temp<<endl;
        
        vector<bool> v(temp, false);

        int count = 0, maxim = 0;

        for (int i = 0; i < n; i++)
        {
            if ((v[arr[i]]) == 0)
            {
                count++;
                v[arr[i]].flip();
                maxim = max(count, maxim);
            }
            else
            {
                count--;
                v[arr[i]].flip();
                maxim = max(count, maxim);
            }
        }
        cout << maxim << endl;
    }
    return 0;
}