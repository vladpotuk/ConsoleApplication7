#include "fraction.h"
#include <iostream>

int main() {
    Fraction fraction1, fraction2, result;

    std::cout << "Enter data for fraction1:\n";
    fraction1.inputFraction();

    std::cout << "Enter data for fraction2:\n";
    fraction2.inputFraction();

    
    result = Fraction::add(fraction1, fraction2);
    std::cout << "Sum: ";
    result.display();
    std::cout << std::endl;

    
    result = Fraction::subtract(fraction1, fraction2);
    std::cout << "Difference: ";
    result.display();
    std::cout << std::endl;

    
    result = Fraction::multiply(fraction1, fraction2);
    std::cout << "Product: ";
    result.display();
    std::cout << std::endl;

    
    result = Fraction::divide(fraction1, fraction2);
    std::cout << "Quotient: ";
    result.display();
    std::cout << std::endl;

    return 0;
}
