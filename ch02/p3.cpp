#include <iostream>

int main() {
    int num;

    std::cout << "Enter an integer: ";
    std::cin >> num;

    int numDigits = 0;
    int numCopy = num;
    
    while (numCopy / 10 != 0) {
        numDigits++;
        numCopy /= 10;
    }
    numDigits++;

    int arr[numDigits];

    for (int i = 0; i < numDigits; i++) {
        arr[i] = num % 10;
        num /= 10;
    }

    for (int j = numDigits - 1; j >= 0; j--) {
        std::cout << arr[j] << " ";
    }


    return 0;
}