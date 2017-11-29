#include <iostream>
#include <windows.h>
using namespace std;


int main()
{
	int lowercase = 0;
	int uppercase = 0;
	int space = 0;
	int tab = 0;
	int digit = 0;    // these variables will tell how many of each the user will type in


	char x[80];     // restricts each line to only 80 characters
	int num = 0;

	cout << "Enter a line of characters: ";

	for (int i = 0; ((x[i] = cin.get()) != '\n'); ++i) /*i represents the subscript of array x
		// cin.get() means a sign, a character. It is telling the computer to get the inputted character,
		 and put them in the array, and making a new line ends the array (remember,
		this wastes the declared memory*/
	{
		if (x[i] >= 'A' && x[i] <= 'Z')
			++uppercase;
		if (x[i] >= 'a' && x[i] <= 'z')
			++lowercase;
		if (x[i] >= '0' && x[i] <= '9')   // this will read the inputs and add the appropriate variables
			++digit;
		if (x[i] == ' ')
			++space;
		if (x[i] == '\t')
			++tab;

	}

	cout << "Number of uppercases is: " << uppercase << endl;
	cout << "Number of lowercases is: " << lowercase << endl;
	cout << "Number of digits is: " << digit << endl;
	cout << "Number of spaces is: " << space << endl;
	cout << "Number of tabs is: " << tab << endl;
	

	return 0;
}