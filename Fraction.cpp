#include "fraction.h"
#include <iostream>

Fraction::Fraction() : numerator(0), denominator(1) {}

Fraction::Fraction(int num, int denom) : numerator(num), denominator(denom) {}

int Fraction::gcd(int a, int b) {
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }
    return a;
}

Fraction Fraction::add(const Fraction& a, const Fraction& b) {
    Fraction result(a.numerator * b.denominator + b.numerator * a.denominator,
        a.denominator * b.denominator);
    result.simplify();
    return result;
}

Fraction Fraction::subtract(const Fraction& a, const Fraction& b) {
    Fraction result(a.numerator * b.denominator - b.numerator * a.denominator,
        a.denominator * b.denominator);
    result.simplify();
    return result;
}

Fraction Fraction::multiply(const Fraction& a, const Fraction& b) {
    Fraction result(a.numerator * b.numerator, a.denominator * b.denominator);
    result.simplify();
    return result;
}

Fraction Fraction::divide(const Fraction& a, const Fraction& b) {
    if (b.numerator == 0) {
        std::cerr << "Error: Division by zero\n";
        return Fraction();
    }

    Fraction result(a.numerator * b.denominator, a.denominator * b.numerator);
    result.simplify();
    return result;
}

void Fraction::inputFraction() {
    std::cout << "Enter numerator: ";
    std::cin >> numerator;

    std::cout << "Enter denominator: ";
    std::cin >> denominator;

    if (denominator == 0) {
        std::cerr << "Error: Denominator cannot be zero. Setting denominator to 1.\n";
        denominator = 1;
    }
}

void Fraction::simplify() {
    int commonDivisor = gcd(numerator, denominator);
    numerator /= commonDivisor;
    denominator /= commonDivisor;
}

void Fraction::display() const {
    std::cout << numerator << "/" << denominator;
}
