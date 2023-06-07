// error


#include <iostream>
#include <bits/stdc++.h>
using namespace std;

vector<int> decToBinary(int n)
{
    int binaryNum[32];

    int i = 0;
    while (n > 0)
    {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
    }
    vector<int> binary(32, 0);
    int k = 32;
    // printing binary array in reverse order
    for (int j = i - 1; j >= 0; j--)
    {
        binary[k] = binaryNum[j];
        k--;
    }
    return binary;
}

int binaryTodec(vector<int> &a)
{
    int number = 0;
    int n = a.size(), p = 0;
    for (int i = n; i > 0; i--)
    {
        number = number +(a[i] * (pow(2, p)));
        p++;
    }
    return number;
}

int palindrome(int n)
{
    vector<int> x;
    int i = 0;
    while (n > 0)
    {
        x[i] = n % 10;
        n = n / 10;
        i++;
    }
    int z = x.size();
    for (int i = 0; i < z / 2; i++)
    {
        if (x[i] != x[z - 1 - i])
            return 0;
    }
    return 1;
}

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n;
        cin >> n;
        vector<int> a(n);
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int count = 0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i; j < n; j++)
            {
                vector<int> x, y, z(32, 0);
                x = decToBinary(a[i]);
                y = decToBinary(a[j]);
                for (int k = 0; k < 32; k++)
                {
                    if (x[k] == y[k])
                    {
                        z[k] = 0;
                    }
                    else
                    {
                        z[k] = 1;
                    }
                }
                int num = binaryTodec(z);
                int check = palindrome(num);
                if (check == 1)
                    count++;
            }
        }
        cout << count << endl;
    }
    return 0;
}