#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n, k;
        cin >> n >> k;
        if (n < 2 * k)
            cout << "NO" << endl;
        else if(n-(2*k)==1)
        {
            if(n%2 ==0)
                cout << "YES"<<endl;
            else
                cout << "NO"<<endl;
        }
        else if ((n - (2 * k)) % 2 != 0 && ((n - (2 * k))/2) % 2 == 0)
            cout << "NO" << endl;
        else if ((n - (2 * k)) % 2 == 0 && ((n - (2 * k))/2) % 2 != 0)
            cout << "NO"<< endl;
        else
            cout << "YES" << endl;
    }

    return 0;
}