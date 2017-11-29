#include <iostream>
#include <Windows.h>	//a less than and greater than header is a system library
#include "../../../VS Headers/john.h"	// a double quote header is a custom library // a .. represents going to a previous file 
																					// u need a / to separate each double dot

//int findMax(int, int);
//int EvenOdd(int);

using namespace std;

int main()
{
	int num1, num2, max;

	cout << "Enter number 1: ";
	cin >> num1;

	cout << "Enter number 2: ";
	cin >> num2;

	max = findMax(num1, num2);
	//cout<< EvenOdd(findMax(num1, num2));    //passing a function to a function here. The findmax function is going to return a int, and evenodd
											//is only passing a function 

	cout << "The greatest number is: " << max << endl;


	if (EvenOdd(max) == 0)
		cout << "Even" << endl;
	else
		cout << "Odd" << endl;

	return 0;
}

 /*int findMax(int num1, int num2)
{
	if (num1 > num2)
		return num1;
	else
		return num2;
}


int EvenOdd(int num)
{
	if (num % 2 == 0)
		return 0;
	else
		return 1;} */


