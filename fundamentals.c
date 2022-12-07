#define _CRT_SECURE_NO_WARNINGS // This makes sure there are no scanf errors
#define BUFFER_SIZE 80 // this sets BUFFER_SIZE to the given number of 80
#define NUM_INPUT_SIZE 10 // this sets NUM_INPUT_SIZE to the given number of 10
#include "fundamentals.h" // header file is in the c file 

void fundamentals(void) // is the opening of ccde as fundamentals is the class
{
	/* Version 1 */
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

	/* Version 2 */


	/* Version 3 */


}