#include <iostream>
#include <windows.h>

using namespace std;

int main()
{
	int n, m;
	int sum = 0;
	int x = 0;
	int z=1;

	cin >> n;

	for (x = 0; x < n; ++x)
	{
		z = 1;
		sum = 0;
		cin >> m;

		for (1; z < m; ++z)
		{
		
			if (m % z == 0)
			{
				sum = sum + z;
				++z;
			}
		}

			if (sum > m)
				cout << m << " superb" << endl;
			else
				cout << m <<  " non-superb" << endl;

		}



	}