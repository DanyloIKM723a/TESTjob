#include <iostream>

// A function for finding the minimum element in an array
int findMin(int arr[], int n) {
    int min = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

// A function for finding the maximum element in an array
int findMax(int arr[], int n) {
    int max = arr[0];
    for (int i = 1; i < n; ++i) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

int main() {
    int arr[] = { 5, 3, 9, 1, 7 }; // The given array
    int n = sizeof(arr) / sizeof(arr[0]); // Determining the size of the array

    int min = findMin(arr, n); // Finding the minimum element
    int max = findMax(arr, n); // Finding the maximum element

    std::cout << "Minimal element: " << min << std::endl;
    std::cout << "Maximum element: " << max << std::endl;

    return 0;
}