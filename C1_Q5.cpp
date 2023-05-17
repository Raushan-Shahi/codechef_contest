#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        string str;

        for (int j = 0; j < n; j++)
        {
            char a;
            cin >> a;
            str.push_back(a);
        }
        sort(str.begin(), str.end());
        int j = 0;
        vector<int> v;
        while (j < n)
        {
            char check = str[j];
            int count = 0;
            for (int k = j; k < n; k++)
            {
                if (check == str[k])
                {
                    count += 1;
                    j += 1;
                }
            }
            v.push_back(count);
        }
        int odd = 0, even = 0;
        for (int l = 0; l < v.size(); l++)
        {
            if (v[l] % 2 != 0)
                odd++;
            else if (v[l] % 2 == 0)
                even++;
        }
        if ((odd > 1)&&(even==0))
            cout << "0" << endl;
        else if ((odd == 1) && (even>0))
            cout << "1" << endl;
        else if((even == 1)&&(odd ==0))
            cout<< "1"<<endl;
        else if((odd >1)&& (even>0))
            cout<<"0";
        else
            cout << "2" << endl;
    }

    return 0;
}