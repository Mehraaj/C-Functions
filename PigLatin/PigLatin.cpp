/*#include <iostream>
using namespace std;

int main()
{
	char string[80];
	char piglatin[80];
	int i;

	cout << "Enter string: ";
	cin.getline(string, 80);   // gets the whole line before the null terminating character

	for (i = 0; string[i] != '\0'; ++i)
		piglatin[i + 1] = string[i];
	piglatin[i] = '\0';    // you need this line so that you can end the array 

	// Destination, Source
	// strcpy_s(piglatin,string);     // this function will place the null terminating character for you, and the piglatin[i]= 'o' 
										//line will be redundent

	piglatin[0] = string[strlen(string) - 1];
	strcat_s(string, )


}*/





#include <iostream>
using namespace std;

int main()
{
	char string[80];
	char piglatin[80];
	int i;

	cout << "Enter a string: ";
	cin.getline(string, 80);

	for (i = 0; string[i] != '\0'; ++i)
		piglatin[i + 1] = string[i];
	piglatin[i] = '\0';
	// Destination, Source
	//strcpy_s(piglatin, string);

	piglatin[0] = string[strlen(string) - 1];
	strcat_s(piglatin, "ay ");

	cout << "Original String: " << string << endl;
	cout << "PIGLATIN: " << piglatin << endl;

	return 0;
}