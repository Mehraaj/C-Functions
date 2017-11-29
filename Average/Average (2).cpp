/*Program: Average of N numbers
  Author: Mehraaj Tawa
  Date: 2/21/17*/

#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	int M;
	int x=0;
	int average=0;
	int sum = 0;

	cin >> N;

	for (1; x < N; x++)
	{
		cin >> M;
		sum = sum + M;
		//average = sum / N;
	}

	average = sum / N;     //Could be here or ^^^ in the loop

	cout << "The average is: " << average << endl;

	return 0;
}