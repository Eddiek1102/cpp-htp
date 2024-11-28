#include <iostream>

int main() {
    bool useLbs = false;
    int temp = 0;

    std::cout << "(1)Pounds or (2)kilograms? ";
    std::cin >> temp;

    if (temp == 1) useLbs = true;
    else if (temp == 2) useLbs = false;
    else {
        std::cout << "Invalid input.\n";
        return -1;
    }

    /*
        BMI(lbs) = (weight in lbs * 703) / (height in inches ^ 2)
        BMI(kgs) = (weight in kgs) / (height in meters ^ 2)
    */

    double weight, height;

    if (useLbs) {
        std::cout << "Weight in pounds: ";
        std::cin >> weight;
        std::cout << "Height in inches: ";
        std::cin >> height;

        std::cout << "BMI: " << (weight * 703) / (height * height) << "\n";
    }
    else {
        std::cout << "Weight in kilograms: ";
        std::cin >> weight;
        std::cout << "Height in meters: ";
        std::cin >> height;

        std::cout << "BMI: " << (weight) / (height * height) << "\n";
    }
    return 0;
}