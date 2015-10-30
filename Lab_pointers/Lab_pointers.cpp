/* Pointers_lab.cpp : main project file.
* Duncan Reeves A-2
* I learned how to use pointers
*/

#include "stdafx.h"
#include <iostream>
#include <string>
#include <fstream>

using namespace std;


void reverser(char *pointer)
{
	char * first_char = pointer;
	char * last_char = pointer + strlen(pointer);
	while (first_char < last_char)
	{
		--last_char;
		char temp_char = *first_char;
		*first_char = *last_char;
		*last_char = temp_char;
		++first_char;
	}
}

int main()
{
	// Declare a c-string to reverse -DR
	char myString[] = "Hello world!";

	//Output the original
	cout << "The original string is " << myString << endl;

	// Call the reverser function
	reverser(myString);

	//Output the result
	cout << "\nThe reversed string is " << myString << endl;

	system("PAUSE");

    return 0;
}

