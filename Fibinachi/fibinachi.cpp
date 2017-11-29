#include <iostream>
using namespace std;                             //recursive function 

unsigned long int fib(unsigned long int);

int main()
{
	while (1)
	{
		int num;
		for(int count = 1; count< 50; count++)
	//	cout << "enter a number: ";
		//cin >> num;

		cout << "Fibonachi(" << count << ") =  " << fib(count) << endl;

	}
}

unsigned long int fib(unsigned long int x)
{
	if (x == 0 || x==1)
		return x;

	return fib(x - 1) + fib(x - 2);

}