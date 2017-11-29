/* #include <iostream>
using namespace std;
#define CLASS_SIZE 20
#define MAX_GRADE 11           // this PAN DEFINE syntax is reaching preprocessor, it is setting a permenent variable 
								// CLASS SIZE will always be 20 throughout the program. MAXGRADE will always be 11
int main()
{
	int class_grades[CLASS_SIZE] = { 0 };
	int distribution[MAX_GRADE] = { 0 };
	int grade, index;
	while (1)
	{
		for (int index = 0; index < CLASS_SIZE; ++index)
		{
			cout << "Enter grade number " << index + 1 << ": ";      //loop to enter grades, with defense programming
			cin >> grade;
			if (grade < 0 || grade > 10)

			{
				cout << "Wrong grade" << endl;
				--index;
				continue;
			}

			class_grades[index] = grade;
		}

		for (index = 0; index < CLASS_SIZE; ++index)
			++distribution[class_grades[index]];             //Makes a poll like system with the class grades array


		for (index = 0; index < MAX_GRADE; ++index)
		{
			cout << "Number of students recieving a "
				<< index << " is " << distribution[index] << endl;
		}
	}

	return 0;

}  */