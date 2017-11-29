#include <iostream>
using namespace std;

int main() 
{
	int n;
	float a, b, w, x, area;
	area = 0;
	cout << "What is the lower limit" << endl;
	cin >> a;
	cout << "What is the lower limit" << endl;
	cin >> b;
	cout << "How many sub-rectangles do you want?" << endl;
	cin >> n;
	x = a;
	w = (b - a) / n;
	while (x <= b - a)
	{
		area = area + (x * x * w);
		x = x + w;

	}

	cout << "Your area is: ";
	cout<< area << endl;






}