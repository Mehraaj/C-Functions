#include <iostream> 
using namespace std;
						//******NOTE: THERE IS ALREADY A LIBRARY FOR SORTING, LOOK IT UP AND GET THAT FUNCTION	
				//for this algorithm, we will use a method called bubble sorting sinking sorting 
				// this method makes the smaller values float like bubbles and the high values sink, in an array 
				// we will use a loop to go through PASSES, basically passing through elements  # of loops = length - 1
				// we will have a nested loop to check value 
				// we will use a function called sizeof(thomas) / sizeof(int) <-- use this when you are not given the length of the array
				// size of will return the number of bytes, and each int has 4 bytes. 
				//So we have to divide the returned value by 4 to get the number of elements 

/*Algorithm:   (number of loops equals number of elements - 1

- start at pass #1, the first element 
- make the first loop, and compare the two adjacent elements. determine which is the largest and swap in order of least to smallest
- Loop #2: check the next two adjacent values and order accordingly
- Loop #3: repeat what was done previously

Pass #2;

- do another three loops to check if the numbers are in order. 
use loop 1 to check the first element again and do the other two loops to check the nect two adjacent elements 

Pass #3:
- do the loops again to check the order */

void sort(char[]);                          //we have to enter the array of numbers, and then sort it least to greatest (have two modes)
														// one for ascending and another for descending 
												//all of this in one function. the two parameters should be 1 for the array and 1 for mode
 

int main()
{
	int array[100];
	int i;




}