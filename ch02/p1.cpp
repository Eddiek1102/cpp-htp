#include <iostream>

bool oddOrEven(int num);

int main() {
    int num = 0;

    while (true) {
        std::cout << "Enter a number (0 to stop): ";
        std::cin >> num;
        if (num == 0) break;

        if (oddOrEven(num)) std::cout << num << " is even.\n";
        else std::cout << num << " is odd.\n";
    }

    std::cout << "Exiting program\n";

    return 0;
}

bool oddOrEven(int num) {
    return num % 2 == 0;
}