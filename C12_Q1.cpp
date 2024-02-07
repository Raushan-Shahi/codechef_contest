#include <iostream>

using namespace std;

int main()
{
    int T;
    cin >> T;

    while (T--)
    {
        int N;
        cin >> N;

        if (N % 3 == 0 || N % 4 == 0)
        {
            cout << "YES" << endl;
        }
        else
        {

            bool possible = false;
            for (int i = 0; i <= N / 3; ++i)
            {
                if ((N - i * 3) % 4 == 0)
                {
                    possible = true;
                    break;
                }
            }

            if (possible)
            {
                cout << "YES" << endl;
            }
            else
            {
                cout << "NO" << endl;
            }
        }
    }

    return 0;
}
