#ifndef COMPLEX_H
#define COMPLEX_H
#include <iostream>
#include <string>
#include <sstream>
using namespace std;
class Complex
{
public:
	Complex();
	Complex(int, int);
	int getA() const;
	int getB() const;
	Complex add(const Complex& sComplex) const;
	Complex subtract(const Complex& sComplex) const;
	Complex multiply(const Complex& sComplex) const;
	string toString() const;

	Complex &operator+=(const Complex& sComplex);
	Complex &operator-=(const Complex& sComplex);
	Complex &operator*=(const Complex& sComplex);

	Complex& operator++();
	Complex& operator--();

	int &operator[](int index);
	Complex operator+();
	Complex operator-();
	friend ostream& operator << (ostream&, const Complex&);
	friend istream& operator >> (istream&, Complex&);

private:
	int a;
	int b;

};

Complex operator+(const Complex& c1, const Complex& c2);
Complex operator-(const Complex& c1, const Complex& c2);
Complex operator*(const Complex& c1, const Complex& c2);

#endif
