#include <iostream>
#include <cmath>

int binaryToDecimal(int binary[], int size) {
    int decimal = 0;
    for (int i = 0; i < size; i++) {
        decimal += binary[i] * pow(2, size - i - 1);
    }
    return decimal;
}

int main() {
    int binary[] = {1, 0, 1, 0, 1};
    int size = sizeof(binary) / sizeof(binary[0]);
    int decimal = binaryToDecimal(binary, size);
    std::cout << decimal << std::endl;
    return 0;
}