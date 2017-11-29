#include <iostream>
#include <windows.h>
using namespace std;

int main()
{
	int i, j, count; // i is row number, j is column

	int Amatrix[][3]=      //This is setting the A matrix to the matrix below 
	{
		{1, 2, 3},
		{ 4,5,6 },
		{ 7,8,9 }
	};



	int Bmatrix[][3] =      //This is setting the B matrix to the matrix below 
	{
		{ 1, 2, 3 },
		{ 4,5,6 },
		{ 7,8,9 }
	};



	for (i=0; i<3; i++)					// for within a for so that we can move inbetween rows.
										//columns will move faster and organize quickly (inner loops always go faster)
		for (j = 0; count = 1, j < 3; j++, count++)
		{
			cout << Amatrix[i][j] + Bmatrix[i][j]<< ' ';
			if (count % 3 == 0)            // to make rows of three
				cout << endl;
		}

	return 0;

} 