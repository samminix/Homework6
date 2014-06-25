//hw6 the complex class

#include <iostream>
#include <iomanip>
#include "Complex.h"
using namespace std;

int main()
{
	double x, y, x1, y1;
	cout << "Enter the first complex number: ";
	cin >> x >> y;
	cout << "Enter the second complex number: ";
	cin >> x1 >> y1;

	Complex C1(x, y);
	Complex C2(x1, y1);

	Complex C3 = C1 + C2;
	cout << "(" << C1.toString() << ")" << " + " << "(" << C2.toString() << ")" << " = " << C3.toString() << endl;

	Complex C4 = C1 - C2;
	cout << "(" << C1.toString() << ")" << " - " << "(" << C2.toString() << ")" << " = " << C4.toString() << endl;

	Complex C5 = C1 * C2;
	cout << "(" << C1.toString() << ")" << " * " << "(" << C2.toString() << ")" << " = " << C5.toString() << endl;

	Complex C6 = C1 / C2;
	cout << "(" <<  C1.toString() << ")" << " / " << "(" <<  C2.toString() << ")" << " = " <<  C6.toString() << endl;

	cout << "|" << C1.toString() << "| = " << C1.abs() << endl;

}