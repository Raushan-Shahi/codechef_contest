#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[22];
        int maxi = 0, result;
        for (int i = 0; i < 22; i++)
        {
            int run = 0, wicket = 0;
            cin >> run >> wicket;
            arr[i] = run + 20 * wicket;
            if (arr[i] > maxi)
            {
                maxi = arr[i];
                result = i;
            }
        }
        cout << result+1 << endl;
    }

    return 0;
}