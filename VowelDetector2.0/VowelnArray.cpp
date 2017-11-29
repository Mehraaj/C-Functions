#include <iostream>

using namespace std;

#define STRING 100

int main()
{
	char str[STRING];
	int counter;
	int a=0, e=0, i=0, o=0, u=0;

	cout << "Enter a string (in lowercase letters): ";
	cin.getline(str, STRING);


	for (int x = 0; str[x] != '\0'; ++x){
		if (str[x] == 'a')
			++a;
		if (str[x] == 'e')
			++e;
		if (str[x] == 'i')
			++i;
		if (str[x] == 'o')
			++o;
		if (str[x] == 'u')
			++u;
	}
	
		cout << "a: "; 
	for (int counter1 = 0; counter1 < a; ++counter1)
		cout << "*";
	cout << endl;
	cout << "e: ";
	for (int counter2 = 0; counter2 < e; ++counter2)
		cout << "*";
	cout << endl;
	cout << "i: ";
	for (int counter3 = 0; counter3 < i; ++counter3)
		cout << "*";
	cout << endl;
	cout << "o: ";
	for (int counter4 = 0; counter4 < o; ++counter4)
		cout << "*";
	cout << endl;
	cout << "u: ";
	for (int counter1 = 0; counter1 < a; ++counter1)
		cout << "*";
	cout << endl;

	 
}