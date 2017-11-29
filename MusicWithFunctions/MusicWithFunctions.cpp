#include <iostream>
#include <windows.h>

using namespace std;            //void has no return value 

void playNote(char, float);        // char will play the note, float is the duration, this function will play the note 
void displayColor(int);     //will display a color 
								// function prototypes , will define after the int main code , these functions will know what notes are what, and the order 
								// function signature : datatype, function name, paraments, paraments datatype, order 
int main()
{
	int num = 0;
	while (1)
	{
		playNote('A', 0.4);
		playNote('B', 0.4);
		playNote('C', 0.4);
		playNote('D', 0.4);
		playNote('E', 0.4);
		playNote('F', 0.4);
		playNote('G', 0.4);
	}
}


void playNote(char g, float l)
{
	char n = g;
	if (n == 'A' || n == 'a') {
		Beep(440, 1 * 1000);
		cout << n;
	}
	else if (n == 'b' || n == 'B') {
		Beep(440, 1 * 1000);
		cout << n;
	}
	else if (n == 'C' || n == 'c') {
		Beep(440, 1 * 1000);
		cout << n;
	}
	else if  (n == 'd' || n == 'D') {
		Beep(440, 1 * 1000);
		cout << n;
	}
	else if (n == 'e' || n == 'E') {
			Beep(440, 1 * 1000);
			cout << n;
		}
	else if (n == 'f' || n == 'F') {
			Beep(440, 1 * 1000);
			cout << n;
		}
	else if (n == 'g' || n == 'G') {
			Beep(440, 1 * 1000);
			cout << n;
		}
}


void displayColor(int x)
{
	

