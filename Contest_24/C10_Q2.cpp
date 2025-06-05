#include <iostream>
#include <vector>

using namespace std;

bool canEqualizeCandies(int n, vector<int>& candies) {
    int totalCandies = 0;
    for (int i = 0; i < n; ++i) {
        totalCandies += candies[i];
    }

    if (totalCandies % n != 0) {
        return false;
    }

    int targetCandies = totalCandies / n;

    for (int i = 0; i < n; ++i) {
        int diff = targetCandies - candies[i];

        if (diff % 2 != 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        vector<int> candies(n);
        for (int i = 0; i < n; ++i) {
            cin >> candies[i];
        }

        if (canEqualizeCandies(n, candies)) {
            cout << "Yes" << endl;
        } else {
            cout << "No" << endl;
        }
    }

    return 0;
}
