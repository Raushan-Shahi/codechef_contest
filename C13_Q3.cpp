#include <iostream>
using namespace std;

int finalY(int X, int Y) {
    while (X != 0) {
        Y %= X; // Equivalent to Y = Y % X;
        swap(X, Y);
    }
    return Y;
}

int main() {
    int T;
    cin >> T; // Number of test cases

    while (T--) {
        int X, Y;
        cin >> X >> Y; // Input X and Y for each test case
        cout << finalY(X, Y) << endl; // Output the final value of Y
    }

    return 0;
}
