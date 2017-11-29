#include <iostream>

using namespace std;
#define STRINGSIZE 80

int main()
{
	
	char MyString[STRINGSIZE], schar;

	int index = 0;
	bool flag = false;


	cout << "Enter a string [80 chars max]: ";
	//cin >> MyString;    // this will only take the first word of a sentence, the set of characters before a white space 
	//use cin.getline because of white spaces , to get the whole sentence 

	cin.getline(MyString, STRINGSIZE);

	cout << "Enter the SEARCH character" << endl;
	cin >> schar;

	cout << "\nCharacter " << schar << " found at position: ";

	for (index = 0; MyString[index] != '\0'; ++index)
	{
		if (MyString[index] == schar)
		{
			cout << index+1 << ' ';
			flag = true;
		}

	}

	if (flag == false)

		cout << "Error: " << schar << " Not Found\a\a" << endl;

	return 0;
	
}