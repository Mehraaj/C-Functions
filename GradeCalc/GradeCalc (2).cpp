#include <iostream>
using namespace std;

int main()
{
	int students, count;
	float grade;
	float sum;
	int n;
	

	cout << "How many students are in your class? \n";
		cin >> students;

		n = students;

		/*for (sum = 0, count=1; n > 0; --n, ++count)
		{
			cout << "Enter student " << count << " grade: ";
			cin >> grade;

			sum += grade;  // sum = sum + grade

		} */


		sum = 0;
		count = 0;

		while (n > 0)
		{
			++count;
			cout << "Enter student " << count << " grade: ";
			cin >> grade;
			sum +=grade;
			--n;

		}

		//A do loop will not require a number 0f students
		
		
	/*	students = 1;
		sum = 0;

		do
		{
			cout << "Enter student" << students << "grade: ";
			cin >> grade;
			sum += grade;
			++students;
			if (!(grade >= 0 && grade <= 100))
				break;
			sum += grade;
		} while (1);            */

		cout << "Average of " << students << " students is: "
			<< "" << sum / float(students) << endl;            

		return 0;


}