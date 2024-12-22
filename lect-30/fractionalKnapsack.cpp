#include <iostream>
#include <vector>
#include <algorithm> // For std::sort

using namespace std;

bool compare(pair<double, int> p1, pair<double, int> p2) {
    return p1.first > p2.first; // Sort in descending order of ratio
}

int fractionKnapsack(vector<int> value, vector<int> weight, int w) {
    int n = value.size();
    if (n == 0 || w == 0) return 0; // Edge case: No items or zero capacity
    
    vector<pair<double, int>> ratio(n); // Store pairs of ratio and index
    int ans = 0;

    // Calculate value-to-weight ratio for each item
    for (int i = 0; i < n; i++) {
        double r = static_cast<double>(value[i]) / weight[i];
        ratio[i] = make_pair(r, i);
    }

    // Sort items by ratio in descending order
    sort(ratio.begin(), ratio.end(), compare);

    // Calculate maximum value within the weight limit
    for (int i = 0; i < n; i++) {
        int idx = ratio[i].second; // Get original item index from sorted ratio

        if (weight[idx] <= w) {
            ans += value[idx]; // Add entire item value
            w -= weight[idx];  // Decrease available weight
        } else {
            ans += ratio[i].first * w; // Add fractional item value
            break;
        }
    }

    cout << "Maximum value in knapsack: " << ans << endl;
    return ans;
}

int main() {
    vector<int> value = {60, 100, 120};
    vector<int> weight = {10, 20, 30};
    int w = 50;

    fractionKnapsack(value, weight, w);

    return 0;
}
