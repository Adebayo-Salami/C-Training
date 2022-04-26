#include "rational.h"
// rational.cpp by Bill Weinman <http://bw.org/>
// updated 2020-07-21

Rational& Rational::operator = (const Rational& rhs) {
    if (this != &rhs) {
        n = rhs.numerator();
        d = rhs.denominator();
    }
    return *this;
}

Rational Rational::reduce() const {
    if (n == 0 || d <= 3) return *this;
    for (int div = d - 1; div; --div) {
        if (n % div == 0 && d % div == 0) {
            return Rational(n / div, d / div);
        }
    }
    return *this;
}

std::string Rational::string() const {
    if (d == 0) return "[NAN]";
    if (d == 1 || n == 0) return std::to_string(n);

    int abs_n = abs(n);     // absolute value
    if (abs_n > d) {
        int whole = n / d;
        int remainder = abs_n % d;
        if (remainder) return std::to_string(whole) + " " + Rational(remainder, d).string();
        else return std::to_string(whole);
    }
    else {
        return reduce().raw_string();
    }
}

std::string Rational::raw_string() const {
    return std::to_string(n) + "/" + std::to_string(d);
}

//Rational Rational::operator + (const Rational& rhs) const {
//    return Rational((n * rhs.d) + (d * rhs.n), d * rhs.d);
//}

//Rational Rational::operator - (const Rational& rhs) const {
//    return Rational((n * rhs.d) - (d * rhs.n), d * rhs.d);
//}

Rational Rational::operator * (const Rational& rhs) const {
    return Rational(n * rhs.n, d * rhs.d);
}

Rational Rational::operator / (const Rational& rhs) const {
    return Rational(n * rhs.d, d * rhs.n);
}

Rational Rational::minusOperation(const Rational& lhs, const Rational& rhs)
{
    return Rational((lhs.numerator() * rhs.denominator()) - (lhs.denominator() * rhs.numerator()), lhs.denominator() * rhs.denominator());
}

Rational::~Rational() {
    n = 0; d = 1;
}