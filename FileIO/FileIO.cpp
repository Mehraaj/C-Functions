#include <iostream>   //an object is a block of code that holds multiple functions, class hold multiple objects, libraries hold multiple classes 
									//object reference variable holds the address of a variable and points to its location 
										//this is used in the class string 
#include <Windows.h> // sleep function
#include <string> //a class (thats why it is light blue) , used for strings	
																//io is input output //advantage of fileIO is that data is saved after program 
#include <fstream> // for file io 

using namespace std;       //you cannot display the content of a file directly to the console. Info must go through temporary buffer first 

int main()
{
	char input[80];
	char temp[80];          //need this to read from the file 
	string filename;
	char answer;           //do u want to continue variable 

	cout << "\t\WELCOME TO THE FILE I/O PROGRAM!!" << endl;   

	while (1)
	{
		cout << "Enter filename: ";
		cin >> filename;
		//getline(cin, filename);           //for files which have file names with spaces    //this syntax is special for file io, 
																									//cin.getline wont work 

		cout << "\nCREATEING FILE " << filename << endl;
		ofstream OutFile(filename, ios::app);   //this opens the file, and if no file exists with the entered name, it will make the file 
											//ios is a flag, allows u to append (add at the end) to a file (add at the end of the file)
											//without ios::app, the program will find the file, open it, delete it, and bring it back empty 
											//OutFile is equivilent to cout for files, it is a obj
		//ofstream OutFile(filename); 
		// ofstream OutFile("Bread");   //this hardcodes the program, to always open file bread 

		if (!OutFile.is_open()) //checks if file is open, if it has something in it // . is calling for a specific function in an object 
		{
			cout << "Error. File is open. " << endl;
			exit(1); //this terminates the program, better than return because you can assign a value to this specific error, making an error code
					 //return works too tho
		}
		cin.ignore(); // to ignore phantom character 
		cout << "\nEnter Text: ";
		cin.getline(input, 80);   //so we can get all the words, and enter it into the file 

		cout << "\nWriting file " << filename << endl;

		for (int x = 0; x < 10; ++x)
		{
			cout << ".";
			Sleep(100);
		}

		OutFile << input;
		OutFile << "\n";        //makes a new line, can put anything here since OutFIle is like cout 
		OutFile.close();       //closes file 

		cout << "\n Displaying file" << filename << "contents" << endl;
		ifstream InFile(filename); //open the textfile 

		if (!InFile.is_open()) // checks if file is open 
		{
			cout << "error\n";
			exit(1);
		}

		while (!InFile.eof())
		{
			InFile.getline(temp, 80);
			cout << temp << endl;
		}
		InFile.close();

		cout << "\nContinue [y/n]? : ";
		cin >> answer;
		if (answer != 'y')
			break;
	}
	return 0; 

	}
