#include <iostream>
#include <string>
using namespace std;
int main()
{
	int n;
	float w, a, b, area, x;
	area = 0;
	cout << "Enter lower limit: \n";
	cin >> a;
	cout << "Enter upper limit: \n";
	cin >> b;
	cout << "Enter number of sub-rectangles: \n";
	cin >> n;
	w = (b - a) / float(n);
	x = a;
	for (x = a; x <= b - w;  x = x + w)
	{

		area = area + (x * x * w);
	}
	cout << "The Area is: \n";
	cout << area << endl;
}