// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

// V1
void tokenizing(void) {
    printf("*** Start of Tokenizing Words Demo ***\n");                        //tell the user the tokenizing words demo has started
    char    words[BUFFER_SIZE];                                                //give the words string array 300 elements to play with
    char* nextWord = NULL;
    int        wordsCounter;
    do {
        printf("Type a few words separated by space (q - to quit):\n");        //prompt user to enter a few words, delimited by spaces (or type q to quit)
        fgets(words, BUFFER_SIZE, stdin);                                      //capture the user's input
        words[strlen(words) - 1] = '\0';                                       //ensure no read overflow by placing a null character termination at the end of the string
        if (strcmp(words, "q") != 0) {                                         //check to see if the user input words or attempted to quit the module
            nextWord = strtok(words, " ");                                     //fetch the next word in the program, delimited by spaces
            wordsCounter = 1;                                                  //increment the number of words the user has input 
            while (nextWord) {                                                 //while a word exists and isn't NULL, display the word and its number in the sequence
                printf("Word #%d is \'%s\'\n", wordsCounter++, nextWord);
                nextWord = strtok(NULL, " ");                                  //tell the function to continue tokenizing the string
            }
        }
    } while (strcmp(words, "q") != 0);                                         //quit the function if the user types "q"
    printf("*** End of Tokenizing Words Demo ***\n\n");                        //tell the user the tokenizing words demo has ended
}