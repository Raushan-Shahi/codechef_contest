#include <iostream>
#include <string>
using namespace std;


string rotateString(const string& str, int k) {
    string rotatedStr = str;
    for (char& c : rotatedStr) {
        if (isalpha(c)) {
            char base = islower(c) ? 'a' : 'A';
            c = (c - base + k) % 26 + base;
        }
    }
    return rotatedStr;
}

int main() {
    int Q;
    cin >> Q;

    while (Q--) {
        int N;
        string S, T, U;
        cin >> N >> S >> T >> U;

        int k = 0;
        for (int i = 0; i < N; ++i) {
            if (T[i] != S[i]) {
                k = (T[i] - S[i] + 26) % 26;
                break;
            }
        }

        string cipherU = rotateString(U, k);
        cout << cipherU << endl;
    }

    return 0;
}
