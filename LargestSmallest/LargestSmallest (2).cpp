#include <iostream>
#include <string>
using namespace std;

int main()
{
	int N;
	int M;
	int x=0;
	int largest= -1000000;
	int smallest= 1000000;

	cin >> N;

	for (1; x < N; ++x)
	{
		cin >> M;

		if (largest < M)
			largest = M;

		else if (largest >= M)
			largest = largest;

		if (smallest > M)
			smallest = M;

		else if (smallest >= M)
			smallest = smallest;

	}


	cout << " The largest of the " << N << " numbers is " << largest<< endl;
	cout << " The smallest of the " << N << " numbers is " << smallest<< endl;


	return 0;
}