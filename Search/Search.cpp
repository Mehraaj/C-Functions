#include <iostream>
#include <iomanip>
using namespace std;    /*there are many types of coded searches:
						type 1: Linear Search: a search where the computer goes element by element, or byte by byte looking for what
						we need. This takes a long time to execute. 
						Type 2: Binary Search: much faster type a search where we cut data in half and compare numbers to find our goal
						disadvantage: we must sort the array in ascending order first before we execute this method. */
#define ARRAY_SIZE 10

void sortArray(int []);
int binarySearch(int[], int);       //second int is search key 

int main()
{
	//const int arraySize = 20;   <-- this or the pan define for a constant variable, but this line takes up a memory location 

	int a[ARRAY_SIZE];
	int key;

	cout << "Please enter the 10 numbers: " << endl;
	for (int i = 0; i < ARRAY_SIZE; ++i)           //or do cin.getline, this way jsut reminds the user of the element number 
													// when we use cin,getline, use null terminating character if allowed
	{
		cout << i + 1 << ":";
		cin >> a[i];
	}
	//cout << "Data in original order\n";
	//for (int j = 0; j < ARRAY_SIZE; ++j)
	//	cout << setw(4) << a[j];

	sortArray(a);

	cout << "Data in ascending order\n";
	for (int j = 0; j < ARRAY_SIZE; ++j)
		cout << setw(4) << a[j];

	return 0;
}

void sortArray(int a[])
{
	int size = sizeof(a) / sizeof(int);
	int hold;

	for (int pass = 0; pass < size - 1; ++pass)            //outer loop is number of passes, size minues one because passes
																//is one less than total 
	{
		for (int loop = 0; loop < size - 1; ++loop)         //inner loop is for number of loops and swaps 
		{
			if (a[loop] > a[loop + 1])
			{
				hold = a[loop];
				a[loop] = a[loop + 1];      //this swaps the two values, it makes the copy of the first, moves the second value to the first
																//and then places the copy in the empty slot (second slot)
				a[loop + 1] = hold;
			}
		}
	}

}

