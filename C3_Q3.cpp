#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;
        if (a == b)
            cout << "YES" << endl;
        else if (a > b && (a - b) % 2 == 0)
            cout << "YES" << endl;
        else if(a<b && (b-a)%2 ==0)
            cout<<"YES"<<endl;
        else if(a<b && (b-a)%4 ==0)
            cout <<"YES"<<endl;
        else
            cout << "NO"<<endl;
    }

    return 0;
}