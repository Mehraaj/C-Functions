#include <iostream>            //greatest common denomenator         mod= modulus 
                             /*									Algorithm:   gcd(a,b)
							 if b = 0, then gcd(a,b) = a
							 find gcd(b, (a mod b)) using the Euclidean algorithm
							 go back to 1 (b--> a, (a mod b) --> b)
							 continue this process until (a mod b) in step 2 is equal to 0 (recursion)*/					
using namespace std;

int gcd(int, int);

int main()
{
	while (1)
	{
		int num1, num2;

		cout << "Enter the two numbers: ";
		cin >> num1 >> num2;
		cout << "The greatest common divisor (denomenator) between " << num1 << " and " << num2 << " is: " << gcd(num1, num2) << endl;
	}
}

int gcd(int a, int b)
{
	if (b == 0)
		return a;
	else   
		return gcd(b, a % b); 
}