#include <iostream>
#include <windows.h>  //a function is a specific type of code, (a piece of code), that completes a task for you, it is used to make organized code 
                     // functions are used in libraries to help us code with shortcuts. 
		
					 // type function definitions outside of int main



int add(int n1, int n2)
{
	return n1 + n2;
}


using namespace std;        

/*int main()
{
	int num1, num2;
	int sum;

	cout << "Enter first number: ";
	cin >> num1;
	cout << "Enter second number: ";                 //could do this or you could do the code below 
	cin >> num2;

	sum = add(num1, num2);				

	cout << endl << sum; 

	return 0;
}        */ 



int main()
{
int num1, num2;


cout << "Enter first number: ";
cin >> num1;
cout << "Enter second number: ";                 
cin >> num2;



cout << endl << add(num1, num2)<< endl;

return 0;
}        


// function signature : datatype, function name, paraments, paraments datatype, order 