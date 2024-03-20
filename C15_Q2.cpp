#include <bits/stdc++.h>
using namespace std;

int main()
{
    // your code goes here
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int v[n];
        for (int i = 0; i < n; i++)
        {
            cin >> v[i];
        }

        int sum = 2*v[n-1];
        
        for(int i =n-2; i>=0;i--){
            if(2*v[i] <= sum)
                sum += v[i];
            else{
                sum = 2*v[i];
            }
        }

        cout << sum << endl;
    }
}
