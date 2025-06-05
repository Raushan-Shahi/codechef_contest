#include <iostream>
using namespace std;

int main()
{
    int T;
    cin >> T;
    for (int i = 0; i < T; i++)
    {
        int x;
        cin >> x;
        if (x <= 10)
            cout << "Lower Double" << endl;
        else if (x <= 15)
            cout << "Lower Single" << endl;
        else if (x <= 25)
            cout << "Upper Double" << endl;
        else
            cout << "Upper Single" << endl;
    }

    return 0;
}