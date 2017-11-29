//HISTOGRAM
#include <iostream>
#include <Windows.h>
using namespace std;

int main() {

	char p;
	int a;
	int b;
	int c;
	int FA = 0;
	int FB = 0;
	int FC = 0;
	int FD = 0;
	int FF = 0;
	int mode = 0;

	cin >> a;
	for (int j = 0; j < a; j++) {      //Number of grade sets you are going to input 
		cin >> b;
		for (c = 0; c < b; c++) { // number of grades in a set 
			cin >> p;       //p is the letter grade 
			//cout << "p: " << p << endl;
			//system("PAUSE");
			switch (p) {
			case 'A':
				FA++;
				break;
			case 'B':
				FB++;
				break;
			case 'C':
				FC++;
				break;
			case 'D':
				FD++;
				break;
			case 'F':
				FF++;
				break;
			}
		}
		cout << "A: ";
		for (int counter1 = 0; counter1 < FA; counter1++)
			cout << "*";
		cout << endl;
		cout << "B: ";
		for (int counter2 = 0; counter2 < FB; counter2++)
			cout << "*";
		cout << endl;
		cout << "C: ";
		for (int counter3 = 0; counter3 < FC; counter3++)
			cout << "*";
		cout << endl;
		cout << "D: ";
		for (int counter4 = 0; counter4 < FD; counter4++)
			cout << "*";
		cout << endl;
		cout << "F: ";
		for (int counter5 = 0; counter5 < FF; counter5++)
			cout << "*";
		cout << endl;
		if (FA > mode)
			mode = FA;
		if (FB > mode)
			mode = FA;
		if (FC > mode)
			mode = FC;
		if (FD > mode)
			mode = FD;
		if (FF > mode)
			mode = FF;
		if (mode == FA)
			cout << "Mode: A\n";
		if (mode == FB)
			cout << "Mode: B\n";
		if (mode == FC)
			cout << "Mode: C\n";
		if (mode == FD)
			cout << "Mode: D\n";
		if (mode == FF)
			cout << "Mode: F\n";
		FA = 0;
		FB = 0;
		FC = 0;
		FD = 0;
		FF = 0;
		mode = 0;

	}

	return 0;
}