#include "Complex.h"

Complex::Complex()
{
	a = 1;
	b = 1;
}

Complex::Complex(int a, int b)
{
	this->a = a;
	this->b = b;
}

int Complex::getA() const
{
	return a;
}

int Complex::getB() const
{
	return b;
}

Complex Complex::add(const Complex  &sComplex) const
{
	int c = a + sComplex.getA();
	int d = b + sComplex.getB();
	return Complex(c, d);

}

Complex Complex::subtract(const Complex & sComplex) const
{
	int c = a - sComplex.getA();
	int d = b - sComplex.getB();

	return Complex(c, d);
}

Complex Complex::multiply(const Complex & sComplex) const
{
	int c = a * sComplex.getA()+b*sComplex.getB()*-1;
	int d = a * sComplex.getB()+b*sComplex.getA();

	return Complex(c, d);
}

string Complex::toString() const
{
	stringstream ss;
	if(b<0)
		ss << a << b << "i";
	else
		ss << a << "+" << b << "i";
	return ss.str();
}

Complex & Complex::operator+=(const Complex & sComplex)
{
	*this = add(sComplex);
	return *this;
}

Complex & Complex::operator-=(const Complex & sComplex)
{
	*this = subtract(sComplex);
	return *this;
}

Complex & Complex::operator*=(const Complex & sComplex)
{
	*this = multiply(sComplex);
	return *this;
}

Complex & Complex::operator++()
{
	a += 1;
	return *this;
}

Complex & Complex::operator--()
{
	a -= 1;
	return  *this;
}


int & Complex::operator[](int index)
{
	if (index == 0)
		return a;
	else
		return b;
}

Complex Complex::operator+()
{
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-a, b);
}

ostream & operator<<(ostream & out, const Complex & complex)
{
	if (complex.getB() < 0)
		out << complex.a << complex.b << "i";
	else
		out << complex.a << "+" << complex.b << "i";
	return out;
}

istream & operator>>(istream & in, Complex & complex)
{
	in >> complex.a >> complex.b;
	return in;
}

Complex operator+(const Complex & c1, const Complex & c2)
{
	return c1.add(c2);
}

Complex operator-(const Complex & c1, const Complex & c2)
{
	return c1.subtract(c2);
}

Complex operator*(const Complex & c1, const Complex & c2)
{
	return c1.multiply(c2);
}
