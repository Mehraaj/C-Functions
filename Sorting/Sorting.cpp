#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main()
{
	int n, c;
	int a[80];
	cout << "Enter the number of numbers in the array: ";
	cin >> n; 

	for (int count = 0; count < n; ++count)
		cin >> a[count];

	sort(a, a + n);

	
	for (int count = 0; count < n; ++count)
		cout << count << " : " << a[count] << endl; 

}