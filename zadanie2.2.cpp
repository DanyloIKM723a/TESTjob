#include <iostream>
#include <vector>

// A function for finding the sum of elements on the main diagonal
int sumMainDiagonal(const std::vector<std::vector<int>>& matrix) {
    int sum = 0;
    for (int i = 0; i < matrix.size(); ++i) {
        sum += matrix[i][i];
    }
    return sum;
}

// A function for finding the sum of elements on the side diagonal
int sumSecondaryDiagonal(const std::vector<std::vector<int>>& matrix) {
    int sum = 0;
    int n = matrix.size();
    for (int i = 0; i < n; ++i) {
        sum += matrix[i][n - i - 1];
    }
    return sum;
}

int main() {
    std::vector<std::vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // Given a square two-dimensional array

    int mainDiagonalSum = sumMainDiagonal(matrix); // The sum of elements on the main diagonal
    int secondaryDiagonalSum = sumSecondaryDiagonal(matrix); // The sum of the elements on the side diagonal

    std::cout << "The sum of elements on the main diagonal: " << mainDiagonalSum << std::endl;
    std::cout << "The sum of elements on the main diagonal: " << secondaryDiagonalSum << std::endl;

    return 0;
}