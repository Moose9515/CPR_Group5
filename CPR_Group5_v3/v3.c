// Define constants
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 100
#define NUM_INPUT_SIZE 10
#define BUFFER_SIZES 512

// Include necessary header file
#include "v3.h"
#include <stdio.h>
#include <stdlib.h> // for NULL
#include <string.h> // for strlen, strcmp

// Function to demonstrate indexing strings
void fundamentals(void) 
{
    // Print start message
    printf("*** Start of Copying Strings Demo ***\n");

    // Declare character arrays for source and destination strings
    char destination[BUFFER_SIZE];
    char source[BUFFER_SIZE];

    // Main loop for copying strings
    do 
    {
        // Reset destination string to empty
        destination[0] = '\0';

        // Prompt user to input a source string
        printf("Type the source string (\"g\" to quit):\n");

        // Read source string from user input
        fgets(source, BUFFER_SIZE, stdin);

        // Remove the newline character from the source string
        source[strlen(source) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(source, "g") != 0) 
        {
            // Copy source string to destination string
            strcpy(destination, source);

            // Print the new destination string
            printf("New destination string is: %s\n", destination);
        }

    } while (strcmp(source, "g") != 0);  // Continue loop until user inputs "g"

    // Print end message
    printf("*** End of Copying Strings Demo ***\n\n");
}

// Function to tokenize words
void tokenizing(void)
{
    printf("*** Start of Tokenizing Sentences Demo ***\n");

    char sentences[BUFFER_SIZES];
    char *nextSentence;
    int sentencesCounter = 1;

    do {
        printf("Type a few sentences separated by dot (q to quit):\n");
        fgets(sentences, BUFFER_SIZES, stdin);
        sentences[strlen(sentences) - 1] = '\0';

        if (strcmp(sentences, "q") != 0) {
            nextSentence = strtok(sentences, ".");

            while (nextSentence != NULL) {
                printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");
            }
        }
    } while (strcmp(sentences, "q") != 0);

    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}

// Function definition for manipulating
void manipulating(void) {
    printf("*** Start of Searching Strings Demo ***\n");

    char haystack[BUFFER_SIZE]; // Declare an array 'haystack' with size 'BUFFER_SIZE'
    char needle[BUFFER_SIZE];   // Declare an array 'needle' with size 'BUFFER_SIZE'
    char *occurrence = NULL;    // Declare a pointer variable 'occurrence' initialized to NULL

    do {
        printf("Type the string (g - to quit): \n");
        fgets(haystack, BUFFER_SIZE, stdin);

        // Remove the newline character from 'haystack'
        haystack[strlen(haystack) - 1] = '\0';

        if (strcmp(haystack, "g") == 0) {
            break;
        }

        printf("Type the substring: \n");
        fgets(needle, BUFFER_SIZE, stdin);

        // Remove the newline character from 'needle'
        needle[strlen(needle) - 1] = '\0';

        occurrence = strstr(haystack, needle);
        if (occurrence) {
            // Print the position where 'needle' was found
            printf("'%s' found at %d position\n", needle, (int)(occurrence - haystack));
        } else {
            // Print a message indicating that 'needle' was not found
            printf("Not found\n");
        }

    } while (strcmp(haystack, "g") != 0);

    printf("*** End of Searching Strings Demo ***\n\n");
}

// Function to convert strings to integers
void converting(void) {
   printf("*** Start of Converting Strings to long Demo ***\n");

    char longString[BUFFER_SIZE];
    long longNumber;

    do {
        printf("Type the long numeric string (q - to quit): \n");
        fgets(longString, BUFFER_SIZE, stdin);

        // Remove the newline character from 'longString'
        longString[strlen(longString) - 1] = '\0';

        if (strcmp(longString, "q") == 0) {
            break;
        }

        // Convert the string to a long using atol
        longNumber = atol(longString);

        // Print the converted number
        printf("Converted number is %ld\n", longNumber);

    } while (strcmp(longString, "g") != 0);

    printf("*** End of Converting Strings to long Demo ***\n\n");
}
