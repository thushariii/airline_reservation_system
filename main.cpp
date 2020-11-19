#include <iostream>
#include "bluesky.cpp"
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include<Windows.h>
using namespace std;

int main()
{

	system("CLS");	// clean the terminal
	cout << "\n:::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;

	time_t my_time = time(NULL);
	cout << "\n                " << ctime(&my_time);

	cout << "\t     WELCOME TO BLUESKY AIRLINE RESERVATION SYSTEM \n";
	cout << ":::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::::" << endl;
	cout << " ..................... MENU OPTIONS .............................\n" << endl;


	menu();	//calling the menu function.
	seat_fill();	// initialize seat array.

	return 0;

}



