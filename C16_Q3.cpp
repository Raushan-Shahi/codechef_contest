#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int a, b, k;
        cin >> a >> b >> k;
        int temp_a = a;
        int temp_b = b;
        int gp_front = 0;
        while (b/k >= a)
        {
            gp_front++;
            if(b%k !=0){
                b--;
            }
            else
                b = b / k;
        }
        gp_front += abs(b-a);

        int gp_back = 0;
        a= temp_a;
        b = temp_b;
        while (a*k <= b)
        {
            gp_back++;
            a = a * k;
        }
        gp_back +=abs( b - a);

        cout << min(gp_back, gp_front) << endl;
    }

    return 0;
}