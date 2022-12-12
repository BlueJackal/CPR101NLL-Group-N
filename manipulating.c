#define _CRT_SECURE_NO_WARNINGS // makes sure there are no uneeded errors
#define BUFFER_SIZE 80 // sets BUFFER_SIZE with up to varbarbles 80 
#include "manipulating.h" // includes manipulating.h

void manipulating(void) { // is the class
	/* Version 1 */
	/*
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
	*/
	/* Version 2 */
	/*
	printf("*** Start of Comparing Strings Demo ***\n"); // starting line 
	char compare1[BUFFER_SIZE]; // sets compare1 in bounds of BUFFER_SIZE
	char compare2[BUFFER_SIZE]; // sets compare1 in bounds of BUFFER_SIZE
	int result; // makes result in int
	do
	{
		printf("Type the 1st string to compare (q - to quit):\n"); // ask user for the first string and what to put to quit
		fgets(compare1, BUFFER_SIZE, stdin); // reads the strings and what size
		compare1[strlen(compare1) - 1] = '\0'; //  takes compare1 and returns its lenght
		if (strlen(compare1, "q") != 0) // checks if q is pressed and if not do what is in the brakets 
		{
			printf("Type the 2nd string to compare:\n"); // ask user for the second string
			fgets(compare2, BUFFER_SIZE, stdin); // reads the strings and what size
			compare2[strlen(compare2) - 1] = '\0'; //  takes compare2 and returns its length
			result = strcmp(compare1, compare2); // it compares compare1 string and compare2 string by each character
			if (result < 0) // if result is less then 0 do what is under 
				printf("\'%s\' string is less than \'%s\'\n", compare1, compare2); // tells user that string 1 is less then string 2
			else if (result == 0) // if result is equal to 0 do what is under 
				printf("\'%s\' string is equal to \'%s\'\n", compare1, compare2);  // tells user that string 1 is equal to string 2
			else // if it is not the what is above do what is under
				printf("\'%s\' string is greater than \'%s\'\n", compare1, compare2); // tells user that string 1 is greater then string 2
		}
	} while (strcmp(compare1, "q") != 0); // if compare1 is q then stop the loop
	printf("*** End of Comparing Strings Demo ***\n\n");// marks the end of the demo
	*/

	/* Version 3 */
	printf("*** Start of Searching Strings Demo ***\n"); // starting line 
	char haystack[BUFFER_SIZE]; // sets haystack in bounds of BUFFER_SIZE
	char needle[BUFFER_SIZE]; // sets needle in bounds of BUFFER_SIZE
	char* occurrence = NULL; 
	do 
	{
		printf("Type the string (q - to quit):\n"); // ask user for the string and what to put to quit
		fgets(haystack, BUFFER_SIZE, stdin); // reads the strings and what size
		haystack[strlen(haystack) - 1] = '\0'; // takes haystack and returns its length
		if (strlen(haystack, "q") != 0) // checks if q is pressed and if not do what is in the brakets 
		{
			printf("Type the substring:\n"); // Tells user to enter a substring
			fgets(needle, BUFFER_SIZE, stdin); // reads the strings and what size
			needle[strlen(needle) - 1] = '\0'; // takes needle and returns its length
			occurrence = strstr(haystack, needle); // 
			if (occurrence) // if occurrence has a valuse do what is under
				printf("\'%s\' found at %d position\n", needle,
					(int)(occurrence - haystack)); // prints the needle and location of it
			else // if it is not the what is above do what is under
				printf("Not found\n"); // tells user it has not been found
		}
	} while (strcmp(haystack, "q") != 0); // if haystack is q then stop the loop
	printf("*** End of Searching Strings Demo ***\n\n");// marks the end of the demo

}