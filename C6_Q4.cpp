#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int countschrsmileys(const string &str)
{
    int count = 0;
    int result = 0;

    for (int i=0; i < str.size(); i++)
    {
        if (str[i] == ':' && str[i+1]== ')')
            count += 1;
        else if (str[i] == '(' && count > 0)
            count = 0;
        else if (str[i] == ')' && str[i+1] == ':' && count > 0)
        {
            result += 1;
            count = 0;
        }
    }
    return result;
}



int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        string s;
        cin >> s;

        int result = countschrsmileys(s);
        cout << result << endl;
    }

    return 0;
}