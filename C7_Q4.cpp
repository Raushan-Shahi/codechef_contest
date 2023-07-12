#include <iostream>
#include <bits/stdc++.h>
using namespace std;

bool palindrom(vector<char> v)
{
    int n = v.size();
    for (int i = 0; i < n / 2; i++)
    {
        if (v[i] != v[n - i - 1])
            return false;
    }
    return true;
}

bool stringpalindrom(vector<char> v, int x)
{
    int n = v.size();
    int flag=0;
    vector<char> z;
    if (palindrom(v))
    {
        return true;
    }

    if (v.size()==1)
        return true;

    for (int i = 0; i < v.size(); i++)
    {
        if (i == x || i == x - 1 || i == x + 1)
            continue;
        z.push_back(v[i]);
    }

    for (int i = 1; i < z.size(); i++)
    {
        flag = stringpalindrom(z,i);
        if(flag ==1)
            return true;
    }
    return false;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, flag =0;
        cin >> n;
        string s;
        cin >> s;
        vector<char> v;
        for (int i = 0; i < n; i++)
            v.push_back(s[i]);
        for (int i = 1; i < n; i++)
        {
            if(stringpalindrom(v,i)==1)
            {
                flag =1;
                break;
            }
        }
        if(flag ==1)
            cout << "YES"<< endl;
        else
            cout << "NO"<< endl;
        
    }
    return 0;
}