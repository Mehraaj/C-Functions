/*Program: Quiz1
Author: Mehraaj Tawa 
Date: 2/15/17 */

#include <iostream>
using namespace std;

int main()
{
	int n;
	int num;
	int sum;

	/*input format given by paterno*/
	cin >> n;
	

	
	for (sum = 0; n > 0; --n)
	{
		cin >> num;
		sum = sum + num;
	}
	
	cout << "The sum is: " << sum << endl;
	return 0;
}