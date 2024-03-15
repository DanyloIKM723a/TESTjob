#include <iostream>

// A function for finding the sum of elements in an array
int findSum(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return sum;
}

int main() {
    int arr[] = { 1, 2, 3, 4, 5 }; // The given array
    int n = sizeof(arr) / sizeof(arr[0]); // Determining the size of the array

    int sum = findSum(arr, n); // Finding the sum of elements

    std::cout << "The sum of the elements in the given array: " << sum << std::endl;

    return 0;
}