#include <iostream>
#include <windows.h>
#include <string.h>

using namespace std;


int main()
{
	char word[80];
	int i, j;  
	bool flag;/*when u have an array of characters, you can enter the entire "word"
						  (array variable) instead of individual characters. Cannot do mutiple words, you will have to use
						  cin.Getline().*/
	while (1)
	{
		flag == true;
		cout << "Enter a word: ";
		cin >> word;
		for (i = 0, j = strlen(word) - 1; i <= j; ++i, --j) /* this will check each character from the leftend
															to the right end (first character to last,
															second to second to last etc.
															strlen looks for the length of the string, you
															must minus one because the location is 1 less
															since it counts from 0 */

		{
			if (word[i] != word[j])
			{
				flag = false;
				break;
			}
			else
				flag = true;
		}

		if (flag == false)
			cout << "Not a palindrome" << endl;
		else
			cout << "are a palindrome" << endl;
	}
return 0;
}