/*Program to do at home:
assign number of workers ex. 10
assign number of items  ex. 15
generate a 2d array where the rows correspond to the employees ex. employee 1, employee 2 etc.
columns represent the items 
everytime an employee sells an item, increment the item number next to their name 
fill in the table 
at the end, 
calculate the salary for the employees and display the salary plus the commission 
do this ^^ with another array that keeps track of the comission bonus for each particluar item. ex. for each item 1 sold, you get 10+,
for each item 2 sold, you get 100+, etc.
so do the salary and add the comission to it and display */

#include <iostream>
#include <Windows.h>
#include <iomanip>

using namespace std;

int main()
{
	int m1[3][3];
	int m2[3][3];
	int i,j; //i is row, j is columns 

	cout << "Enter matrix 1 elements on the same line: ";
	
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
			cin >> m1[i][j];
	}

	cout << "Enter matrix 2 elements on the same line: ";

	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
			cin >> m2[i][j];
	}

	cout << "M1 + M2: \n\n";
	for (i = 0; i < 3; ++i)
	{
		for (j = 0; j < 3; ++j)
			cout << setw(5) << m1[i][j] + m2[i][j] << ' ';
		cout << "\n";
	}


		

}



