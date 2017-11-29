#include <iostream>
#include <windows.h>
using namespace std;


int main()
{

	int num;
	int time;

	cout << "Enter a Number: " << endl;
	cin >> num;
	cout << "Enter a timeout in seconds: " << endl;
	cin >> time;
	cout << "\n(++num)+1=? " << endl;
	cout << time << " seconds to answer" << endl;

	cout << "\n";
	for (int i = 0; i < time; ++i)
	{
		cout << "*";
		Beep(1000, 100);
		Sleep(1000);

	}



	cout << "\nCurrent value for num is: " << num << endl;
	cout << "(++num) + 1 = " << (++num) + 1 << endl;
	cout << "The new value for num is: " << num << endl;



	cout << "Enter a Number: " << endl;
	cin >> num;
	cout << "Enter a timeout in seconds: " << endl;
	cout << "\n(num++)+1=? " << endl;
	cout << time << " seconds to answer" << endl;

	cout << "\n";
	for (int i = 0; i < time; ++i)
	{
		cout << "*";
		Beep(1000, 100);
		Sleep(1000);

	}



	cout << "\nCurrent value for num is: " << num << endl;
	cout << "(num++) + 1 = " << num++ + 1 << endl;
	cout << "The new value for num is: " << num << endl;


	return 0;
}



/* if num is 5
++num + 1 = 7, because we have to add the pre increment since it is before the num variable and then add,
but num itself is 6. Because we still have to do the pre increment we called for 


if num is 5
num++ + 1=6, because we arent adding anything to num to start of with, since it is a post increment. it is
like saying num + 1= 6.
Num itself however, is also 6. this is because when we call for num, which is 5, we have to do the post
increment since it is part of num. 
*/