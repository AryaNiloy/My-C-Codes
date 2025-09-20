#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
// Structure to represent an item
struct Item {
double weight;
double profit;
double ratio; // profit/weight ratio
};
// Comparator function to sort items by their profit-to-weight ratio in
descending order
bool compare(Item a, Item b) {
return a.ratio > b.ratio;
}
// Function to solve the fractional knapsack problem
void fractionalKnapsack(double capacity, vector<Item>& items) {
// Sort items by their profit-to-weight ratio
sort(items.begin(), items.end(), compare);
double totalProfit = 0.0; // Total profit earned
cout << "\nSelected items: \n";
cout << "Weight\tProfit\tFraction\n";
for (const auto& item : items) {
if (capacity >= item.weight) {
// Take the whole item
totalProfit += item.profit;
capacity -= item.weight;
cout << item.weight << "\t" << item.profit << "\t1.0\n";
} else {
// Take the fraction of the item that fits
double fraction = capacity / item.weight;
totalProfit += item.profit * fraction;
cout << item.weight << "\t" << item.profit << "\t" << fraction << "\n";
break;
}
}
cout << "\nTotal Profit: " << totalProfit << endl;

}
int main() {
// Input: Number of items, their weights, profits, and knapsack capacity
int n;
double capacity;
cout << "Enter the number of items: ";
cin >> n;
vector<Item> items(n);
cout << "Enter the weight and profit of each item:\n";
for (int i = 0; i < n; ++i) {
cout << "Item " << i + 1 << " (Weight Profit): ";
cin >> items[i].weight >> items[i].profit;
items[i].ratio = items[i].profit / items[i].weight;
}
cout << "Enter the capacity of the knapsack: ";
cin >> capacity;
// Solve the fractional knapsack problem
fractionalKnapsack(capacity, items);
return 0;
}
