#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

string find_permutation(int N, vector<int>& A) {
    unordered_map<int, int> occurrences;
    vector<int> permutation;
    int remaining = N;

    for (int num : A) {
        occurrences[num]++;
    }

    for (int i = 0; i < 2 * N; ++i) {
        if (occurrences[A[i]] > 0) {
            permutation.push_back(A[i]);
            occurrences[A[i]] -= 2;
            remaining--;
        }
        if (remaining == 0) break;
    }

    string result;
    for (int i = 0; i < N; ++i) {
        result += to_string(permutation[i]) + " ";
    }

    return result;
}

int main() {
    int T;
    cin >> T;

    while (T--) {
        int N;
        cin >> N;

        vector<int> A(2 * N);
        for (int i = 0; i < 2 * N; ++i) {
            cin >> A[i];
        }

        cout << find_permutation(N, A) << endl;
    }

    return 0;
}
