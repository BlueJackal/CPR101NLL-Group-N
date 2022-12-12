#define _CRT_SECURE_NO_WARNINGS // This makes sure there are no scanf errors
#define BUFFER_SIZE 80 // this sets BUFFER_SIZE to the given number of 80
#define NUM_INPUT_SIZE 10 // this sets NUM_INPUT_SIZE to the given number of 10
#include "fundamentals.h" // header file is in the c file 

void fundamentals(void) // is the opening of ccde as fundamentals is the class
{
	/* Version 1 */
	/*
	printf("*** Start of Indexing Strings Demo ***\n"); //This line displays the start in the consale
	char buffer1[BUFFER_SIZE]; //this line sets the buffer1 as an arrary of BUFFER_SIZE in char
	char numInput[NUM_INPUT_SIZE]; //this line sets the numInput as an arrary of NUM_INPUT_SIZE in char
	size_t position; //Sets a size postion
	do // is a do-while loop
	{
		printf("Type not empty string (q - to quit):\n"); // tells user enter a string or to enter q to quit
		fgets(buffer1, BUFFER_SIZE, stdin); //gets is a stdlib function used to take input from user and it reads the string buffer1 and the array BUFFER_SIZE inside the string then stores its respective string value 
		buffer1[strlen(buffer1) - 1] = '\0';  // strlen determines the length of the string buffer1 and asks the user for 
		if (strcmp(buffer1, "q") != 0) // this checks if only q is enterted 
		{
			printf("Type the character position within the string:\n"); // tells user to enter a position
			fgets(numInput, NUM_INPUT_SIZE, stdin); // takes the input from user and reads the NUM_INPUT_SIZE
			numInput[strlen(numInput) - 1] = '\0'; // numInput is has numInput - 1
			position = atoi(numInput); //position is the string of numInput 
			if (position >= strlen(buffer1)) // if the position is greater then or = to buffer1 do what is in the breakets 
			{
				position = strlen(buffer1) - 1; // postion returns its length of buffer1 string
				printf("Too big... Position reduced to max. availbale\n"); //tells the if it is over the buffer size of 80
			}
			printf("The character found at %d position is \'%c\'\n",
				(int)position, buffer1[position]); // prints the character position and what it is
		}
	} while (strcmp(buffer1, "q") != 0); // if q is enterted it quits the program
	printf("*** End of Indexing Strings Demo ***\n\n");// Marks the end of the Demo 
	*/

	/* Version 2 */
	/*
	printf("*** Start of Measuring Strings Demo ***\n"); //This line displays the start in the consale
	char buffer2[BUFFER_SIZE]; //this line sets the buffer2 as an arrary of BUFFER_SIZE in char
	do // is a do-while loop
	{
		printf("Type a string (q - to quit):\n"); // tells user enter a string or to enter q to quit
		fgets(buffer2, BUFFER_SIZE, stdin); // reads the strings and what size
		buffer2[strlen(buffer2) - 1] = '\0';  // strlen determines the length of the string buffer2
		if (strlen(buffer2, "q") != 0) // checks if q is pressed and if not do what is in the brakets 
			printf("The length of \'%s\' is %d characters\n",
				buffer2, (int)strlen(buffer2)); // prints the string and number of charaters  
	} while (strcmp(buffer2, "q") != 0); // if buffer2 is q then stop the loop
	printf("*** End of Measuring Strings Demo ***\n\n");// marks the end of the demo
	*/

	/* Version 3 */

	printf("*** Start of Copying Strings Demo ***\n"); // This line displays the start in the consale
	char destination[BUFFER_SIZE]; // Initialize destianation array to BUFFER_SIZE
	char source[BUFFER_SIZE]; // Initialize source array to BUFFER_SIZE
	do // is a do-while loop
	{
		destination[0] = '\0'; // sets destination to 0
		printf("Destination string is reset to empty\n"); // tells user what reset
		printf("Type the source string (q - to quit):\n"); // tells user enter a string or to enter q to quit
		fgets(source, BUFFER_SIZE, stdin); // reads the strings and what size
		source[strlen(source) - 1] = '\0'; // strlen determines the length of the string source
		if (strlen(source, "q") != 0) // checks if q is pressed and if not do what is in the brakets
		{
			strcpy(destination, source); // strcpy copies source to destination
			printf("New destination string is \'%s\'\n", destination); // prints destination string 
		}
	} while (strcmp(source, "q") != 0); // if source is q then stop the loop
	printf("*** End of Copying Strings Demo ***\n\n");// marks the end of the demo
}