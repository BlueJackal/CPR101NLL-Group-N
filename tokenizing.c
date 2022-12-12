// TOKENIZING MODULE SOURCE
#define _CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 300
#include "tokenizing.h"

void tokenizing(void) {

    /* / / / / / / / / / / / / / / / / / /
            V E R S I O N   O N E
    / / / / / / / / / / / / / / / / / / */

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




    /* / / / / / / / / / / / / / / / / / /
            V E R S I O N   T W O
    / / / / / / / / / / / / / / / / / / */


    //V2
    char    phrases[BUFFER_SIZE];                                                       //declare variables for tokenizing
    char* nextPhrase = NULL;
    int     phrasesCounter;

    printf("*** Start of Tokenizing Phrases Demo ***\n");                               //mark beginning of tokenizing demo
    do {
        printf("Type a few phrases separated by comma(q - to quit):\n");                //ask user to input phrases until they decide to quit (by entering q)
        fgets(phrases, BUFFER_SIZE, stdin);                                             //capture user input
        phrases[strlen(phrases) - 1] = '\0';                                            //terminate user input with a null termination character
        if ((strcmp(phrases, "q") != 0))                                                //check if user decided to quit (by entering q)
        {
            nextPhrase = strtok(phrases, ",");                                          //set nextPhrase equal to the next word in the user's string, delimited by commas
            phrasesCounter = 1;                                                         //set counter to 1
            while (nextPhrase) {                                                        //while nextPhrase isn't null (aka a next word exists):
                printf("Phrase #%d is \'%s\'\n", phrasesCounter++, nextPhrase);             //print "Phrase N is X" where N is incrementing phrase number and X is sequential phrase
                nextPhrase = strtok(NULL, ",");                                             //set current phrase to null so pointer moves on to the next one
            }                                                                           //end while loop
        }                                                                               //end if
    } while (strcmp(phrases, "q") != 0);                                                //end while
    printf("*** End of Tokenizing Phrases Demo ***\n\n");                               //mark end of tokenizing demo




    /* / / / / / / / / / / / / / / / / / /
          V E R S I O N   T H R E E
    / / / / / / / / / / / / / / / / / / */

    printf("*** Start of Tokenizing Sentences Demo ***\n");                             //mark beginning of tokenizing sentences demo
    char    sentences[BUFFER_SIZE];                                                     //declare our tokenizing cariables
    char*   nextSentence = NULL;
    int     sentencesCounter;
    do {                                                                                //while the user hasn't entered a single 'q' as their input:
        printf("Type a few sentences separated by dot(q - to quit):\n");                    
        fgets(sentences, BUFFER_SIZE, stdin);                                               //capture user input and store to sentences variable
        sentences[strlen(sentences) - 1] = '\0';                                            //null terminate sentences to make sure we get no errors
        if ((strcmp(sentences, "q") != 0)) {                                                //if user hasn't entered 'q' as their only input,
            nextSentence = strtok(sentences, ".");                                                  //set nextSentence to the characters before the next delimiter (.)
            sentencesCounter = 1;                                                                   //begin counting sentences by setting sentencesCounter to 1
            while (nextSentence) {                                                                  //while a next sentence exists,
                printf("Sentence #%d is \'%s\'\n", sentencesCounter++, nextSentence);                   //iterate through the user's input and print 
                nextSentence = strtok(NULL, ".");                                                       //sentences until none remain
            }                                                                           //end sentences loop
        }                                                                               //end if for 'quit' input
    } while (strcmp(sentences, "q") != 0);                                              //end while for 'quit' input
    printf("*** End of Tokenizing Sentences Demo ***\n\n");                             //mark end for sentences tokenizing demo

}
