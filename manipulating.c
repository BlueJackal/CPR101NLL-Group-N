#define _CRT_SECURE_NO_WARNINGS // makes sure there are no uneeded 
#define BUFFER_SIZE 80 // sets BUFFER_SIZE with up to varbarbles 80 
#include "manipulating.h" // includes manipulating.h

void manipulating(void) { // is the class
	/* Version 1 */
	printf("*** Start of Concatenating Strings Demo ***\n"); // starting line 
	char string1[BUFFER_SIZE]; // sets string1 in bounds of BUFFER_SIZE
	char string2[BUFFER_SIZE]; // sets string2 in bounds of BUFFER_SIZE
	do
	{
		printf("Type the 1st string (q - to quit):\n"); // ask user for the first string and what to put to quit
		fgets(string1, BUFFER_SIZE, stdin); // reads the strings and what size 
		string1[strlen(string1) - 1] = '\0'; // counts the first sting
		if ((strcmp(string1, "q") != 0)) // compares the string to check if q is entered once 
		{
			printf("Type the 2nd string:\n"); // ask user for the second string
			fgets(string2, BUFFER_SIZE, stdin); // reads the strings and what size 
			string2[strlen(string2) - 1] = '\0'; // it counts second string2
			strcat(string1, string2); // Puts both strings togather next to each other
			printf("Concatenated string is \'%s\'\n", string1); // prints the strings together
		}
	} while (strcmp(string1, "q") != 0); // if string1 has just q it quits the program
	printf("*** End of Concatenating Strings Demo ***\n\n");// marks the end of the demo

	/* Version 2 */



	/* Version 3 */


}