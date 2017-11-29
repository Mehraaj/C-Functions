#include <iostream>
using namespace std;


void reverse(char [], char[], int*);     //we are passing by reference here in this program, we are passing the memory address to the function 
								//this prototype will take whole arrays, instead of a single character 

bool compare(char[], char[], int*);       //will return a 0 for false or 1 for true 
 
int main()
{
	while (1)
	{
		int wordlength;
		char word[80];
		char reverseWord[80];          //always start varibales with lower case and uppercase the beginning of new words 

		cout << "Enter a word: ";
		cin.getline(word, 80);

		reverse(word, reverseWord, &wordlength);         //calls the reverse function. The name of the array is the address of the array 

		//reverse(&word[0], reverseWord);     <-- this code could also be used instead of the previous line (^^^^) since the and symbol is an address caller operator. 
												//You put zero to start at the beginning 

		if (compare(word, reverseWord, &wordlength) == false)  //passing function through another function 
			cout << "Not a palindrome" << endl;
		else
			cout << "Palindrome" << endl;

	}
}



void reverse(char word[], char reverseWord[], int *i)
{
	
	for (int count = 0; word[count] != '\0'; count++)    //this gets the exact length of the word 
		*i = count;
	for (int count = 0; count < *i; *i++)     //this assigns the word in reverse order to the reverseWord ARRAY
		reverseWord[count] = word[*i - count];

			
}

bool compare(char word[], char reverseWord[], int *i)
{
	for(int x=0; x < *i; x++ )
		if(word[x] != reverseWord[x])
		return false;
	else
		return true;
}

