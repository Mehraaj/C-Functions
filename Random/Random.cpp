#include <iostream>
#include <iomanip> //used for rand function and srand function 
#include<cstdlib>// used for rand function and srand function 
#include <time.h>
#include <ctime> //used for time 
#include <windows.h>
using namespace std;

/*int main()
{
	for (int counter = 1; counter <= 10; counter++)
	{
		cout << setw(10) << setfill('-')   // this by itself will:
	<< rand() << endl; //display 10 numbers, only 10 digits, and will replace empty digit places with -
	}
}   */





int main() {



	// gaurantee a seed which is always different using a function which is based off of time.
	srand(time(0));

	for (int counter = 1; counter <= 20; counter++)
	{
		cout << setw(10) << (1 + rand() % 6);  //random number generator will generate 1-6

		if (counter % 5 == 0)  // if counter is divisible by 5, start a new line. Purpose:
			// to display only 5 numbers per line 
			cout << endl;

	}
}



/* int main()
{
	int seed;

	while (1)
	{
		cout << "Enter a seed: \n";
		cin >> seed;
		srand(seed);

		for (int counter = 1; counter <= 10; counter++)
		{
			cout << setw(10) << setfill('-')
				<< rand() << endl;
		}
	}
	return 0;
}
#endif  */

// this code takes the seed number inputted, and gives random numbers, however
//same seed= same set of numbers 