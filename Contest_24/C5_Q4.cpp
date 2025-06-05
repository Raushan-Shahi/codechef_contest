#include <iostream>
#include <vector>
#include <unordered_set>
#include <algorithm>
using namespace std;

int main() {
    int N;
    cin >> N;
    
    vector<string> programs(N);
    for (int i = 0; i < N; i++) {
        cin >> programs[i];
    }
    
    unordered_set<string> uniquePrograms;
    vector<string> order;
    
    for (int i = N - 1; i >= 0; i--) {
        if (uniquePrograms.find(programs[i]) == uniquePrograms.end()) {
            order.push_back(programs[i]);
            uniquePrograms.insert(programs[i]);
        }
    }
    
    for (const string& program : order) {
        cout << program.substr(program.size() - 2);
    }
    
    return 0;
}
