
#include <iostream>

using namespace std;

#define DEBUG

#ifdef DEBUG
int main()
{

	enum levels { Freshmen, Sophmore, Junior, Senior };
	int choice;

	cout << "Enter a level [0=Freshmen --> Senior=3]:";
	cin >> choice;

	switch (choice)
	{
	case 0:
		cout << "Your are a Freshmen" << endl;
		break;
	case 1:
		cout << "Your are a Sophmore" << endl;
		break;
	case 2:
		cout << "Your are a Junior" << endl;
		break;
	case 3:
		cout << "Your are a Senior" << endl;
		break;
	default:
		cout << "You are illegal-Hide" << endl;

	}



	return 0;

}

#endif
