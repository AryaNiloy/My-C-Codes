#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Function to solve the 0/1 Knapsack Problem
int knapsack(int capacity, const vector<int>& weights, const vector<int>& values, int n) {
    // Create a 2D vector for storing results of subproblems
    vector<vector<int>> dp(n + 1, vector<int>(capacity + 1, 0));

    // Build the table dp[][] in bottom-up manner
    for (int i = 1; i <= n; i++) {
        for (int w = 1; w <= capacity; w++) {
            if (weights[i - 1] <= w) {
                // Include the item or exclude it, whichever gives the maximum value
                dp[i][w] = max(values[i - 1] + dp[i - 1][w - weights[i - 1]], dp[i - 1][w]);
            } else {
                // Item cannot be included because it's too heavy
                dp[i][w] = dp[i - 1][w];
            }
        }
    }
    return dp[n][capacity]; // The maximum value for 'n' items and 'capacity'
}

int main() {
    // Input: number of items, capacity of the knapsack, weights and values of items
    int n, capacity;
    cout << "Enter the number of items: ";
    cin >> n;

    vector<int> weights(n), values(n);
    cout << "Enter the weights of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> weights[i];
    }

    cout << "Enter the values of the items: ";
    for (int i = 0; i < n; i++) {
        cin >> values[i];
    }

    cout << "Enter the capacity of the knapsack: ";
    cin >> capacity;

    // Output: Maximum value that can be carried in the knapsack
    int maxValue = knapsack(capacity, weights, values, n);
    cout << "The maximum value that can be carried in the knapsack is: " << maxValue << endl;

    return 0;
}
