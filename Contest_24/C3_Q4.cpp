//error



#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int goodremoval(vector<int> &a)
{

}

int main()
{
    int t;
    int m = 1000000007;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int count_o = 0, count_e = 0, count = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] % 2 == 0)
                count_e++;
            else
                count_o++;
        }
    }

    return 0;
}