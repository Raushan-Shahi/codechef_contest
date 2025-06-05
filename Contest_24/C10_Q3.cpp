#include <iostream>
#include <vector>

using namespace std;

pair<int, int> findPair(int n) {
    int x = 0, y = n;

    if (n % 2 == 1) {
        x = 0;
        y = 1;
    } else {
        x = 1;
        y = 1;
    }

    n >>= 1;

    int i = 1;
    while (n > 0) {
        if (n % 2 == 1) {
            x |= (1 << i);
            y ^= (1 << i);
        }
        i++;
        n >>= 1;
    }

    return make_pair(x, y);
}

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;

        pair<int, int> result = findPair(n);

        cout << result.first << " " << result.second << endl;
    }

    return 0;
}
