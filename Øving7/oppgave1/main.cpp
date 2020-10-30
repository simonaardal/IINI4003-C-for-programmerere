#include "fraction.hpp"
#include <iostream>
#include <string>

using namespace std;
Fraction operator-(int integer, const Fraction &other);
ostream &operator<<(ostream &out, const Fraction &fraction) {
    out << fraction.numerator << "/" << fraction.denominator;
    return out;
}

int main() {
    Fraction a(10, 20);
    Fraction b(3, 4);
    Fraction c;
    c.set(5);

    //OPPGAVE 1 a)

    cout << 3 - a << endl;
    cout << 2 - b << endl;


}
