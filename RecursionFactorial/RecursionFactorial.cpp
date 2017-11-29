#include <iostream>
using namespace std; //recursive functions call themselves until they reach a base code- when they get answer, stop calling themselves
						//where they get some answer and then go back and return values 

unsigned long int factorial(unsigned long int);

int main()
{
	while (1)
	{
		int num;
		                                                         //memory overload causes this program to stop at 33 factorial
		cout << "Enter the number: ";
		cin >> num;

		cout << num << " factorial is: " << factorial(num) << endl;

	}
}

unsigned long int factorial(unsigned long int x)
{
	if (x == 1 || x<=1)
		return 1;
	else
		return x * factorial(x - 1);

}