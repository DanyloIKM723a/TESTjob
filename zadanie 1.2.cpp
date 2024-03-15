#include <iostream>
#include <vector>

// A function for transposing a two-dimensional array
std::vector<std::vector<int>> transpose(const std::vector<std::vector<int>>& matrix) {
    int rows = matrix.size();
    int cols = matrix[0].size();

    // Creating a transposed array with appropriate dimensions
    std::vector<std::vector<int>> transposed(cols, std::vector<int>(rows));

    // Filling the transposed array
    for (int i = 0; i < rows; ++i) {
        for (int j = 0; j < cols; ++j) {
            transposed[j][i] = matrix[i][j];
        }
    }

    return transposed;
}

// A function for displaying a two-dimensional array on the screen
void printMatrix(const std::vector<std::vector<int>>& matrix) {
    for (const auto& row : matrix) {
        for (int val : row) {
            std::cout << val << " ";
        }
        std::cout << std::endl;
    }
}

int main() {
    std::vector<std::vector<int>> matrix = { {1, 2, 3}, {4, 5, 6}, {7, 8, 9} }; // Given a two-dimensional array

    std::cout << "Initial array:\n";
    printMatrix(matrix);

    std::vector<std::vector<int>> transposedMatrix = transpose(matrix); // Array transposition

    std::cout << "\nTransposed array:\n";
    printMatrix(transposedMatrix);

    return 0;
}