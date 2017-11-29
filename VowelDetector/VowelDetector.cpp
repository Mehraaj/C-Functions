#include <iostream>
#include <string>

using namespace std;

int main()
{
	char word[1000];
	char a = 'a', e = 'e', i = 'i', o = 'o', u = 'u';
	int count = 0;
	

	while (1)
	{
		count = 0;
		cout << "Enter a word and we will count the vowels" << endl;
		cin >> word;

		for (int x = 0; x < strlen(word); ++x)
		{
			if (word[x] == a || word[x] == e || word[x] == i || word[x] == o || word[x] == u
				|| word[x] == 'A' || word[x] == 'E' || word[x] == 'I' || word[x] == 'O' || word[x] == 'U')
				++count;
		}

		cout << "Number of vowels: " << count << endl;
	}
}