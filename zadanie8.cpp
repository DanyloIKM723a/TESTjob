#include <iostream>
#include <unordered_map>
#include <vector>

// A function to find all pairs of elements in an array whose sum is equal to a given number
std::vector<std::pair<int, int>> findPairsWithSum(int arr[], int n, int targetSum) {
    std::vector<std::pair<int, int>> pairs;
    std::unordered_map<int, int> complementMap; // A hash table to store the desired addition

    for (int i = 0; i < n; ++i) {
        int complement = targetSum - arr[i];
        if (complementMap.find(complement) != complementMap.end()) {
            pairs.push_back({ complementMap[complement], i });
        }
        complementMap[arr[i]] = i;
    }

    return pairs;
}

int main() {
    int arr[] = { 2, 4, 8, 5, 3, 6, 10 }; // The given array
    int n = sizeof(arr) / sizeof(arr[0]); // Determining the size of the array
    int targetSum = 10; // The given amount

    std::vector<std::pair<int, int>> pairs = findPairsWithSum(arr, n, targetSum); // Finding pairs of elements

    // Displaying found pairs of elements on the screen
    std::cout << "Pairs of elements with a sum " << targetSum << ":\n";
    for (const auto& pair : pairs) {
        std::cout << arr[pair.first] << " and " << arr[pair.second] << std::endl;
    }

    return 0;
}