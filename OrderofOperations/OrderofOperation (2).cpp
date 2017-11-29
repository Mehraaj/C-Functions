/* order of operations

1. ()
2.* multipication         whichever comes first, between multi and division 
3. /division
4.% modulus
5.+ addition                whichever comes first between add and subtraction 
6.- subtraction
*/

#include <iostream>
using namespace std;

int main()
{
	int x;
	int y;
	int z;
	float answer;
	float answer2;
	while (1)
	{
		cout << " x y z:";
		cin >> x >> y >> z;
		answer = float(x)+float(y);
		answer2 = (x+y)/float(z);
		cout << "Answer="<< answer << endl;
		cout <<"Answer2="<< answer2 << endl;

	}
}

/*
int / int= int

int/float= int

float/int= float

float/ float(int)= float      You are making the int a temporary float, called Cascading 

float/float= float

float*int=int

float*float=float

int*float=int

int*int=int

int+float= float 

float+float=float

int-float = int

float-int=int 


int usually wins over other datatypes, so try to work with same datatype variables.
*/