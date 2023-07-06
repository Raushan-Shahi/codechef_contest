#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int q;
    cin >> q;
    while (q--)
    {
        int n;
        cin >> n;
        char s[n], t[n], u[n];
        for (int i = 0; i < n; i++)
            cin >> s[i];
        for (int i = 0; i < n; i++)
            cin >> t[i];
        for (int i = 0; i < n; i++)
            cin >> u[i];
        
        int k = abs(int(s[0] - t[0]));
        char res[n];
        for (int i = 0; i < n; i++)
            res[i] = char((((u[i] + k) - 96) % 26)+96);
        for (int i = 0; i < n; i++)
            cout << res[i];
        cout << endl;
    }
    return 0;
}