#include <iostream>
#include <iomanip>
#include <cstdlib> // used for rand()
#define DEBUG
#include <ctime>
#ifdef DEBUG
using namespace std;

int main()
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
#endif

