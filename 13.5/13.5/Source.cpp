//hw6 baby name ranking

#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
	int rank;
	string boyname, girlname, targetname;
	fstream babynames;
	char again = 'y';


	babynames.open("babynames.txt", ios::in || ios::out);

	while (again == 'y')
	{
		babynames.seekp(ios::beg);
		cout << "Enter a baby name to search for: ";
		cin >> targetname;
		bool found = false;

		while (!babynames.eof())
		{
			babynames >> rank >> boyname >> girlname;
			if (targetname == boyname)
			{
				cout << targetname << " was ranked " << rank << " in the popularity list of top 1000 boy baby names for 1994!" << endl;
				found = true;
				break;
			}
			else if (targetname == girlname)
			{
				cout << targetname << " was ranked " << rank << " in the popularity list of top 1000 girl baby names of 1994!" << endl;
				found = true;
				break;
			}
		}
		if (!found)
			cout << targetname << " was not found in the popularity list of top 1000 baby names for 1994!" << endl;

		cout << "Would you like to search for a new name?(y or n): ";
		cin >> again;
	}
}