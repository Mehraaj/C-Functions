#include <iostream>

using namespace std;

int main()
{
	float grades[5]; //array structure for the arry "grades". <-- can hold 5 elements
	float grade;
	int count = 0;
	

	do
	{
		cout << "Enter your grade: ";
		cin >> grade;
		grades[count] = grade; // writes to an array
		// this says, assign variable "grade" to the array spot "count"
		++count;

	}while (grade != -1);

	count -=2;


	for (; count >= 0; --count)
		cout << grades[count] << endl;

	return 0;

}