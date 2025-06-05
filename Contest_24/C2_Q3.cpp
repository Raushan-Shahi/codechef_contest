#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int n;
        cin >> n;
        char test[n];
        for (int i = 0; i < n; i++)
            cin >> test[i];

        int count_a = 0, count_b = 0;
        if (test[0] == 'A')
            count_a++;

        for (int i = 1; i < n; i++)
        {
            if (test[i] == 'A' && test[i - 1] == 'A')
                count_a++;
            else if (test[i] == 'B' && test[i - 1] == 'B')
                count_b++;
        }
        cout << count_a << "  " << count_b << endl;
    }
    return 0;
}