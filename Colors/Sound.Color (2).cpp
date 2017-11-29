#include <iostream>
#include <windows.h> // Need for beep function (Sounds)
using namespace std;

int main()
{



	unsigned f, incf, initf, finalf, duration;  /* f = frequency, incf= incrementing frequency,
initf= initial frequency, finalf= final frequency*/
	
	char quit;

	cout << "Enter initial frequency: \n";
	cin >> initf;
	cout << "Enter final frequency: \n";
	cin >> finalf;
	cout << "Enter frequency increment: \n";
	cin >> incf;
	cout << "Enter duration in MILLISECONDS: \n";
	cin >> duration;


	cout << "Brace yourself and enter the wonderful world of sounds\a\a" << endl;

	while (1)
	{
		system("CLS");   // CLS clears the screen
		system("color 02"); // changes the system colors, first digit does background, second changes text

			for (f = initf; f <= finalf; f += incf)
			{
				cout << "Frequency: " << f << " Hz" << endl;
				Beep(f, duration); //Beep function, first condition is frequency, second one is duration
				
			}

			system("CLS");
			system("color FD");

			for (f = finalf; f >= initf; f -= incf)
			{
				cout << "Frequency: " << f << " Hz" << endl;
				Beep(f, duration);
			}

			system("CLS");
			system("color FD");


			return 0;

	}



}