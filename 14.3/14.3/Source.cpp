// hw6 the circle class

#include <iostream>
#include "CircleWithConstantMemberFunctions.h"
using namespace std;


int main(){
	Circle C1(11);
	Circle C2(11);

	cout << (C1 != C2 ? "True" : "False") << endl;

	Circle C3(15);
	Circle C4(25);

	cout << (C4 > C3 ? "True" : "False") << endl;
}