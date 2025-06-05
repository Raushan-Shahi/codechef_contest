#include <iostream>
#include <bits/stdc++.h>
using namespace std;
    
int main(){
    int t;
    cin >> t;
    while (t--)
    {
        int a,b;
        cin >> a >> b;
        if(a >= 2*b)
            cout << 0 << endl;
        else if(b >=2*a)
            cout << 0 << endl;
        else if(a>b)
            cout << b- int(a/2) << endl;
        else if(b>a)
            cout << a- int(b/2) << endl;
        else
            cout << a- int(b/2) << endl;
    }
    
return 0;
}