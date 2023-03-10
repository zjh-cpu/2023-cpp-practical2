#include <iostream>
#include <vector>

int main() {
    int rows, cols;
    std::cin >> rows >> cols;
    std::vector<std::vector<int>> matrix(rows, std::vector<int>(cols));
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            std::cin >> matrix[i][j];
        }
    }
    std::vector<int> counts(10);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            int digit = matrix[i][j] % 10;
            counts[digit]++;
        }
    }
    for (int i = 0; i < 10; i++) {
        std::cout << counts[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}