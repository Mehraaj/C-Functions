#include <iostream>
#include <windows.h> // Need for Beep function 
#pragma comment (lib, "winmm.lib") // Used for music

using namespace std;


int main()
{
	system("music");  // location of file (folders or drives) , file name (for music)



	system("CLS");
	system("Color E8");



	Sleep(2000); //Need windows.h for this, and uppercase S for Sleep,5000 milliseconds
				 //Sleep makes the system idle

	//PlaySound(TEXT("mission.wav"), NULL, SND_SYNC || SND_FILENAME);
	// or for the same result you could type:
	PlaySoundA("mission.wav", NULL, SND_SYNC || SND_FILENAME);   //FYI: You need the music file to play 

	system("Pause");



	return 0;


	/*Potential project: Make a jukebox program, pick 5 songs and when the user types a number,
	a certain song plays */

}
