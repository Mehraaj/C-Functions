
#include <iostream>
#include <cstdlib>
#include <ctime>
#include <iomanip>

#define RUN
using namespace std;

#ifdef RUN
int main()
{
	srand(time(NULL));
	int face;
	int frequency1 = 0;
	int frequency2 = 0; //countes how many 2's rolled 
	int frequency3 = 0;
	int frequency4 = 0;
	int frequency5 = 0;
	int frequency6 = 0;
	for (int roll = 1; roll <= 6000000; roll++)
	{
		face = 1 + rand() % 6;
		switch (face)
		{
		case 1:
			++frequency1;
			break;
		case 2:
			++frequency2;
			break;
		case 3:
			++frequency3; //increments 3 counter
			break;
		case 4:
			++frequency4;
			break;
		case 5:
			++frequency5;
			break;
		case 6:
			++frequency6;
			break;
		default:
			cout << "why you here" << endl;
			break;
		}
	}

	cout << "Face \t Frequency" << endl;
	cout << " 1 \t" << frequency1 << endl;
	cout << " 2 \t" << frequency2 << endl;
	cout << " 3 \t" << frequency3 << endl;
	cout << " 4 \t" << frequency4 << endl;
	cout << " 5 \t" << frequency5 << endl;
	cout << " 6 \t" << frequency6 << endl;

	return 0;
}

#endif