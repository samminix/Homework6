#include <sstream>
#include <cstdlib>
#include <iomanip>
#include "Complex.h"


Complex::Complex()
{
	RealA = 0;
	ImaginaryB = 0;
}

Complex::Complex(double a)
{
	RealA = a;
	ImaginaryB = 0;
}

Complex::Complex(double a, double b)
{
	RealA = a;
	ImaginaryB = b;
}

double Complex::getRealPart() const
{
	return RealA;
}

double Complex::getImaginaryPart() const
{
	return ImaginaryB;
}

Complex Complex::add(const Complex& C1) const
{
	double r = (this->RealA + C1.getRealPart());
	double i = (this->ImaginaryB + C1.getImaginaryPart());
	return Complex(r, i);
}

Complex Complex::subtract(const Complex& C1) const
{
	double r = (this->RealA - C1.getRealPart());
	double i = (this->ImaginaryB - C1.getImaginaryPart());
	return Complex(r, i);
}

Complex Complex::multiply(const Complex& C1) const
{
	double r = ((this->RealA * C1.getRealPart()) - (this->ImaginaryB * C1.getImaginaryPart()));
	double i = ((this->ImaginaryB * C1.getRealPart()) + (this->RealA * C1.getImaginaryPart()));
	return Complex(r, i);
}

Complex Complex::divide(const Complex& C1) const
{
	double r= (((this->RealA * C1.getRealPart()) + (this->ImaginaryB * C1.getImaginaryPart())) / ((C1.getRealPart() * C1.getRealPart()) + (C1.getImaginaryPart() * C1.getImaginaryPart())));
	double i = (((this->ImaginaryB * C1.getRealPart()) - (this->RealA * C1.getImaginaryPart())) / ((C1.getRealPart() * C1.getRealPart()) + (C1.getImaginaryPart() * C1.getImaginaryPart())));
	return Complex(r, i);
}

double Complex::abs() const
{
	return (sqrt((this->RealA * this->RealA) + (this->ImaginaryB * this->ImaginaryB)));
}

std::string Complex::toString() const
{
	std::stringstream numb;
	numb << setprecision(4) << this->RealA;
	numb << " + ";
	numb << setprecision(4) << this->ImaginaryB;
	numb << "i";

	return numb.str();
}

Complex& Complex::operator+=(const Complex& C1)
{
	*this = add(C1);
	return *this;
}

Complex& Complex::operator-=(const Complex& C1)
{
	*this = subtract(C1);
	return *this;
}

Complex& Complex::operator*=(const Complex& C1)
{
	*this = multiply(C1);
	return *this;
}

Complex& Complex::operator/=(const Complex& C1)
{
	*this = divide(C1);
	return *this;
}

string Complex::operator[](int x)
{
	stringstream numb;
	if (x == 0)
		numb << this->RealA;
	else if (x == 1)
	{
		numb << this->ImaginaryB;
		numb << "i";
	}
	return numb.str();

}

Complex& Complex::operator++()
{
	this->RealA++;
	return *this;
}

Complex& Complex::operator--()
{
	this->RealA--;
	return *this;
}

Complex Complex::operator++(int x)
{
	Complex temp(RealA, ImaginaryB);
	this->RealA++;
	return temp;
}

Complex Complex::operator--(int x)
{
	Complex temp(RealA, ImaginaryB);
	this->RealA--;
	return temp;
}

Complex Complex::operator+()
{
	return *this;
}

Complex Complex::operator-()
{
	return Complex(-RealA, -ImaginaryB);
}

ostream& operator<<(ostream& out, const Complex& numb)
{
	out << numb.RealA;
	out << " + ";
	out << numb.ImaginaryB;
	out << "i";
	return out;
}

istream& operator>>(istream& in, Complex& numb)
{
	cout << "Enter the real part: ";
	in >> numb.RealA;

	cout << "Enter the imaginary part: ";
	in >> numb.ImaginaryB;
	return in;
}





Complex operator+(const Complex& C1, const Complex& C2)
{
	return C1.add(C2);
}

Complex operator-(const Complex& C1, const Complex& C2)
{
	return C1.subtract(C2);
}

Complex operator*(const Complex& C1, const Complex& C2)
{
	return C1.multiply(C2);
}

Complex operator/(const Complex& C1, const Complex& C2)
{
	return C1.divide(C2);
}