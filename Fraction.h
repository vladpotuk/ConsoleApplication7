#ifndef FRACTION_H
#define FRACTION_H

class Fraction {
private:
    int numerator;
    int denominator;

    
    static int gcd(int a, int b);

public:
    Fraction(); 
    Fraction(int num, int denom); 

    static Fraction add(const Fraction& a, const Fraction& b);
    static Fraction subtract(const Fraction& a, const Fraction& b);
    static Fraction multiply(const Fraction& a, const Fraction& b);
    static Fraction divide(const Fraction& a, const Fraction& b);

    
    void inputFraction();
    void simplify();
    void display() const;

    
    inline int getNumerator() const { return numerator; }
    inline int getDenominator() const { return denominator; }
};

#endif
