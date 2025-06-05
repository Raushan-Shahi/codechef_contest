#include <iostream>
#include <vector>
#include <climits> // For INT_MAX
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;

        vector<int> v(n); // FIXED: Allocate space for n elements

        for (int i = 0; i < n; i++)
            cin >> v[i];

        int ans = INT_MAX;
        int temp = 1;

        for (int i = 1; i < n; i++)
        {
            if (v[i] != v[i - 1])
            {
                ans = min(temp+1, ans);
                temp = 1;
            }
            else
            {
                temp++;
            }
        }

        // EDGE CASE: If the last sequence is the shortest
        ans = min(temp, ans);

        if (n == 1)
            cout << -1 << endl;
        else
            cout << ans << endl;
    }

    return 0;
}
