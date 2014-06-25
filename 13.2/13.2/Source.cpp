// hw6 count characters

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	string filename, line;

	cout << "Enter a filename: ";
	cin.ignore;
	getline(cin, filename);


	fstream File(filename, ios::in);//Create fstream object
	int sum = 0;
	if (File.is_open())
	{
		while (!File.eof())
		{
			getline(File, line);

			int Characters = line.length();
			for (int i = 0; i < line.length(); i++)
			{
				if (line.at(i) == ' ')
					Characters--;
			}
			sum = Characters + sum;
		}
		cout << "Number of Characters: " << sum << endl;
	}
	else
		cout << "Error Opening File" << endl << endl;
}