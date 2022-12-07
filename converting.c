#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80                                                      //Variable for maximum user input length
#include "converting.h"

//V1
void converting(void) {

    /* / / / / / / / / / / / / / / / / / /
            V E R S I O N   O N E
    / / / / / / / / / / / / / / / / / / */
    printf("*** Start of Converting Strings to int Demo ***\n");            //Tells the user this is where the converting strings to int demo begins
    char    intString[BUFFER_SIZE];                                         //Initialize a character array with 80 elements (as defined by buffer_size)
    int        intNumber;                                                   //Create an undeclared int named intNumber;
    do {
        printf("Type an int numeric string (q - to quit:\n");               //Prompt the user to input a numeric string
        fgets(intString, BUFFER_SIZE, stdin);                               //Capture the user's input
        intString[strlen(intString) - 1] = '\0';                            //Place a null character termination at the end of the user's input to ensure it's properly terminated
        if (strcmp(intString, "q") != 0) {                                  //If the user doesn't enter "q"
            intNumber = atoi(intString);                                    //Convert user input to an integer (from string) and store it inside intNumber
            printf("Converted number is %d\n", intNumber);                  //Display the converted number to the user
        }
    } while (strcmp(intString, "q") != 0);                                  //End the while loop when q is entered
    printf("*** End of Converting Strings to int Demo ***\n\n");            //Tell the user the Converting Strings to Int demo has concluded



    /* / / / / / / / / / / / / / / / / / /
            V E R S I O N   T W O 
    / / / / / / / / / / / / / / / / / / */

    printf("*** Start of Converting Strings to double Demo ***\n");         //Mark beginning of coverting demo #2
    char    doubleString[BUFFER_SIZE];                                      //initialize variables for conversion
    double  doubleNumber;
    do {                                                                    //capture the user's input into doubleString until they enter "q" to quit
        printf("Type the double numberic string (q - to quit):\n");
        fgets(doubleString, BUFFER_SIZE, stdin);                            //capture user's input to the char doubleString
        doubleString[strlen(doubleString) - 1] = '\0';                          //terminate doubleString with a null termination character to prevent overflow
        if ((strcmp(doubleString, "q") != 0)) {                             //if the user hasn't enetered "q" to quit,
            doubleNumber = atof(doubleString);                                  //convert the string into a floating point number representation
            printf("Converted number is %f\n", doubleNumber);                   //tell the user what the result of the conversion was
        }                                                                   //end if
    } while (strcmp(doubleString, "q") != 0);                               //end while loop
    printf("*** End of Converting Strings to double Demo ***\n\n");         //Mark end of coverting demo #2


    /* Version 3 */

}