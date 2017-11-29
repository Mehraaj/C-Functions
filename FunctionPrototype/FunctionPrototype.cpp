#include <iostream>
using namespace std;

int add(int, int);    //function prototype , it gives the structure of a future function, and the function is defined after the int main code 

int main()
{
	int num1, num2;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";
	cin >> num2;

	cout << endl << add(num1, num2) << endl;

	return 0;
}                                    //define function after int main, this is useful when you have multiple functions that you need access to 

int add(int n1, int n2)                     //change the datatype here for overloaded functions 
{
	return n1 + n2;
}


// function signature : datatype, function name, paraments, paraments datatype, order 
//overloaded functions: same name, different parameters. this allows for the same functuon to do similar tasks ex: adding ints and adding floats 
// prototype signature and function signature must match 




//overloaded functions are functions that have the same name, but different signatures 
//Useful for doing the same task in different ways ex: add for int and add for float 
//^^^^^this will need two functions, one for float and one for int 