#include <bits/stdc++.h>
using namespace std;



int minMovesToOpenLock(const string& S, const string& K) {
    int n = S.length();
    int m = K.length();
    int minMoves = 100; 

    for (int i = 0; i < n-m+1; i++) {
        int moves = 0;

        for (int j = 0; j < m; j++) {
            int diff = abs(S[(i + j) % n] - K[j]);
            moves += min(diff, 10 - diff);
        }

        minMoves = min(minMoves, moves);
    }

    return minMoves;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N, M;
        cin >> N >> M;
        string S, K;
        cin >> S >> K;

        int result = minMovesToOpenLock(S, K);
        cout << result << endl;
    }

    return 0;
}
