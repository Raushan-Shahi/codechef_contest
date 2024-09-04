#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int func(int n){
    return (n*(n-1))/2;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        unordered_map<int, int> mp;
        for (int i = 0; i < n; i++)
        {
            int a;
            cin >> a;
            mp[a]++;
        }
        int max_count=0, zero_count =0, result =0;
        for(auto it:mp){
            if(it.first == 0)
                zero_count+= it.second;
            else if(it.second>1){
                max_count= max(max_count, it.second);
                result += func(it.second);
            }
            else
                max_count = max(max_count, it.second);
        }
        result -= func(max_count);
        result += func(max_count+zero_count);

        cout << result << endl;
    }

    return 0;
}