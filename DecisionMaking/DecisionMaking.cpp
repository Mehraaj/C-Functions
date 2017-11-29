#include <iostream>
#include<string>
using namespace std;

int main()
{
	float num;
	//bool a= false;
	cout << "Enter a number: \n";

	while (1)
	{
		
		cin >> num;

		
			if  (num < 0)
			{
				cout << "Negative\n";
				//a = false;

			}
			else if (num > 0)
			{
				cout << "Positive\n";
				//a = false;
			}

			else if (num == 0)
			{
				cout << "non-negative, non-positive" << endl;
			}
		}

	return 0;
}

