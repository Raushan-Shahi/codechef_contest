#include <iostream>
#include <vector>
#include <unordered_map>
#include <algorithm>
using namespace std;

int main() {
    int t;
    cin >> t;

    while (t--) {
        int n, c;
        cin >> n >> c;
        vector<int> a(n), b(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int i = 0; i < n; i++) cin >> b[i];

        // Step 1: Minimum cost for each distinct vitamin
        unordered_map<int, int> vitamin_cost;
        for (int i = 0; i < n; i++) {
            int vit = a[i], cost = b[i];
            if (vitamin_cost.find(vit) == vitamin_cost.end())
                vitamin_cost[vit] = cost;
            else
                vitamin_cost[vit] = min(vitamin_cost[vit], cost);
        }

        // Step 2: Collect and sort all min costs
        vector<int> costs;
        for (auto &pair : vitamin_cost) {
            costs.push_back(pair.second);
        }

        sort(costs.begin(), costs.end());

        // Step 3: Try all prefixes to maximize C * X - Y
        int max_value = 0;
        int total_cost = 0;
        for (int i = 0; i < costs.size(); i++) {
            total_cost += costs[i];
            int X = i + 1;
            int value = c * X - total_cost;
            max_value = max(max_value, value);
        }

        cout << max_value << endl;
    }

    return 0;
}

