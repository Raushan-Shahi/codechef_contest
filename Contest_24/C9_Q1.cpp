#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int l, v1, v2;
        cin >> l >> v1 >> v2;
        int s1, s2;
        if (l % v1 == 0)
            s1 = l / v1;
        else
            s1 = (l / v1) + 1;
        if (l % v2 == 0)
            s2 = l / v2;
        else
            s2 = (l / v2) + 1;
        
        if(s2 < s1)
            cout << s1-s2-1<< endl;
        else 
            cout << "-1" << endl;
    }
}