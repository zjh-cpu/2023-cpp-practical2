#include <iostream>
#include <string>

void decimalToBinary(std::string decimalStr) {
    int decimal = std::stoi(decimalStr); 
    int binary[32];
    int i = 0;
    while (decimal > 0) {
        binary[i] = decimal % 2;
        decimal /= 2; 
    }
    for (int j = i - 1; j >= 0; j--) {
        std::cout << binary[j];
    }
    std::cout << std::endl;
}
int main() {
    std::string decimalStr;
    std::cin >> decimalStr;
    decimalToBinary(decimalStr);
    return 0;
}