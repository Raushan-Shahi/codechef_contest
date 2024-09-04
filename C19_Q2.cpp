#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k;
        cin >> n >> k;
        queue<int> q;
        int sum = 0;

        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            if (i == n - 1)
                sum = a;
            else
                q.push(a);
        }

        while (k > 0)
        {
            sum += q.front();
            q.pop();
            k--;
        }
        while (!q.empty())
        {
            cout << q.front() << " ";
            q.pop();
        }
        cout << sum << endl;
    }

    return 0;
}