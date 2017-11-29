#include <iostream>
#include <windows.h>

using namespace std;


int main()
{
	char word[80];
	int i, j, flag=1;   /*when u have an array of characters, you can enter the entire "word"
					  (array variable) instead of individual characters. Cannot do mutiple words, you will have to use
					  cin.Getline().*/
	while (1)
	{
		cout << "Enter a word: ";
		cin >> word;
		for (i = 0, j = strlen(word) - 1; i < j; ++i, --j) /* this will check each character from the leftend
																	  to the right end (first character to last,
																	  second to second to last etc.
																	  strlen looks for the length of the string, you
																	  must minus one because the location is 1 less
																	  since it counts from 0 */
		{
			if (word[i] != word[j])
			{
				flag = 0;
				
			}
			else
			{
				flag = 1;
				
			}
			if (i < j + 1)
				if (word[i] == word[j])
					flag = 1;
				else
					flag = 0;
				
			if (flag == 0)
				break;
		}
		if (flag)
			cout << "Is a palindrome" << endl;
		else
			cout << "not a palindrome" << endl;
	}
	return 0;

}