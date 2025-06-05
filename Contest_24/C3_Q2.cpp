#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int n, x;
        cin >> n >> x;
        if (n * x >= 10000 && n * x <= 99999)
            cout << "YES" << endl;
        else
            cout << "NO" << endl;
    }

    return 0;
}