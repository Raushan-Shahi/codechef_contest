#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        string s;
        cin >> s;
        int count = 1;
        for (int i = 0; i < s.size(); i++)
        {
            if (s[i] == '1')
                count += 10;
        }
        if (s[0] == '1' && s[2] == '1')
            count += 100;
        if (s[0] == '1' && s[3] == '1')
            count += 100;
        if (s[1] == '1' && s[2] == '1')
            count += 100;
        if (s[1] == '1' && s[3] == '1')
            count += 100;

        cout << count << endl;
    }

    return 0;
}