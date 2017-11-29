#include <iostream>
#include <cstdlib>
#include <algorithm>

using namespace std;



int main()
{
	int n, m;
	bool run;
	int a[80];

	cout << "Enter the number of following inputs" << endl;

	cin >> n;

	for (int count = 0; count < n; ++count) {
		cout << count << " : ";
		cin >> a[count];
	}

	sort(a, a + n);

	for (int c = 0; c < n; ++c)                                  //earathosthene 
	{
		for (int f = 2; f < n; ++f)
		{

		/*	while (a[c] == 1 || a[c] == 0)
			{
				cout << a[c] << " is not a prime number " << endl;
				continue;
			}
*/
			if (a[c] % f == 0)
				cout << a[c] << " is not a prime number " << endl;
			else
				cout << a[c] << " is a prime number " << endl;
		}
	}

	return 0;

}

