#include <iostream>
#include <vector>

// A function to search for elements in a given range in a two-dimensional array
std::vector<int> findElementsInRange(const std::vector<std::vector<int>>& matrix, int lower, int upper) {
    std::vector<int> result;

    for (const auto& row : matrix) {
        for (int element : row) {
            if (element >= lower && element <= upper) {
                result.push_back(element);
            }
        }
    }

    return result;
}

int main() {
    std::vector<std::vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // Given a two-dimensional array
    int lowerBound = 3; // The lower limit of the range
    int upperBound = 7; // The upper limit of the range

    std::vector<int> elementsInRange = findElementsInRange(matrix, lowerBound, upperBound); // Search for elements in a range

    // Display of found elements on the screen
    std::cout << "Elements in range [" << lowerBound << ", " << upperBound << "]: ";
    for (int element : elementsInRange) {
        std::cout << element << " ";
    }
    std::cout << std::endl;

    return 0;
}