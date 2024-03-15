#include <iostream>

// A function for finding the average value of elements in an array
double findAverage(int arr[], int n) {
    int sum = 0;
    for (int i = 0; i < n; ++i) {
        sum += arr[i];
    }
    return static_cast<double>(sum) / n; // Convert to double for exact division
}

int main() {
    int arr[] = { 5, 3, 9, 1, 7 }; // The given array
    int n = sizeof(arr) / sizeof(arr[0]); // Determining the size of the array

    double average = findAverage(arr, n); // Finding the average value of elements

    std::cout << "The average value of the elements in the array: " << average << std::endl;

    return 0;
}