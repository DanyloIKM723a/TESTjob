#include <iostream>
#include <unordered_map>
#include <vector>

// A function for finding repeated elements in an array
std::vector<int> findDuplicates(int arr[], int n) {
    std::unordered_map<int, int> countMap;
    std::vector<int> duplicates;

    // Filling the countMap container with the number of occurrences of each element
    for (int i = 0; i < n; ++i) {
        countMap[arr[i]]++;
    }

    // Adding duplicates to the duplicates vector
    for (auto& pair : countMap) {
        if (pair.second > 1) {
            duplicates.push_back(pair.first);
        }
    }

    return duplicates;
}

int main() {
    int arr[] = { 5, 3, 9, 1, 7, 3, 9, 5 }; // The given array
    int n = sizeof(arr) / sizeof(arr[0]); // Determining the size of the array

    std::vector<int> duplicateElements = findDuplicates(arr, n); // Finding duplicate elements

    // Display of repeated elements on the screen
    std::cout << "Repeating elements: ";
    for (int i = 0; i < duplicateElements.size(); ++i) {
        std::cout << duplicateElements[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}