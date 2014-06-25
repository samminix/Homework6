//hw6 create a text file

#include <iostream>
#include <fstream>
#include <ctime>
using namespace std;

int main(){
	srand(time(NULL));
	fstream output;//Create fstream object
	output.open("createatext.txt", ios::out);

	int value = 0;
	for (int i = 0; i < 99; i++)
	{
		value = rand() % 10;
		output << value << " ";

	}

	output << endl;


	output.close();//Close the file
}