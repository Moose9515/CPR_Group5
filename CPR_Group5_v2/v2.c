// Define constants
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 100
#define NUM_INPUT_SIZE 10
#define BUFFER_SIZES 1000
#define BUFFER_SIZE3 80


// Include necessary header file
#include "v2.h"
#include <stdio.h>
#include <stdlib.h> // for NULL
#include <string.h> // for strlen, strcmp

// Function to demonstrate indexing strings
void fundamentals(void) 
{
    printf("*** Start of Measuring strings Demo ***\n");

    char buffer2[BUFFER_SIZE];
    
    // Continue the loop until the user enters 'g'
    do {
        // Prompt the user to type a string
        printf("Type a string (g - to quit) : \n");
        
        // Read input from the user
        fgets(buffer2, BUFFER_SIZE, stdin);

        // Remove newline character if present
        size_t length = strlen(buffer2);
        if (length > 0 && buffer2[length - 1] == '\n') {
            buffer2[length - 1] = '\0';
        }

        // Check if the entered string is not equal to 'g'
        if (strcmp(buffer2, "g") != 0) {
            // Print the length of the entered string
            printf("The length of '%s' is %d characters\n", buffer2, (int)strlen(buffer2));
        }

    } while (strcmp(buffer2, "g") != 0);  // Continue the loop if the entered string is not 'g'

    printf("*** End of Measuring Strings Demo ***\n\n");
}

// Function to tokenize words
void tokenizing(void)
{
    printf("*** Start of Tokenizing Sentences Demo ***\n");

    char sentences[BUFFER_SIZES];  // Buffer to store input sentences
    char *nextSentence;           // Pointer to the next sentence token
    int sentencesCounter = 1;     // Counter for sentence numbering

    do {
        printf("Type a few sentences separated by dot (q to quit):\n");
        fgets(sentences, BUFFER_SIZES, stdin);
        sentences[strlen(sentences) - 1] = '\0';  // Remove the newline character at the end

        if (strcmp(sentences, "q") != 0) {
            nextSentence = strtok(sentences, ".");  // Tokenize the input into sentences
            sentencesCounter = 1;

            while (nextSentence != NULL) {
                printf("Sentence #%d is '%s'\n", sentencesCounter++, nextSentence);
                nextSentence = strtok(NULL, ".");  // Move to the next sentence token
            }
        }

    } while (strcmp(sentences, "q") != 0);

    printf("*** End of Tokenizing Sentences Demo ***\n\n");
}

// Function definition for manipulating
void manipulating(void) {
// Print a header indicating the start of the program
printf(" Start of Comparing Strings Demo \n");

// Declare two character arrays to store input strings, with a constant BUFFER SIZE
char compare1[BUFFER_SIZE];
char compare2[BUFFER_SIZE];

// Declare an integer variable to store the result of string comparison
int result;

// Start a do-while loop that continues until the user types 'q'
do {
    // Prompt the user to enter the 1st string for comparison
    printf("Type the 1st string to compare (q - to quit) : \n");

    // Read input string into compare1 using fgets
    fgets(compare1, BUFFER_SIZE, stdin);

    // Remove newline character from compare1
    compare1[strlen(compare1) - 1] = '\0';

    // Check if the entered string is not equal to 'q'
    if (strcmp(compare1, "q") != 0) {

        // Prompt the user to enter the 2nd string for comparison
        printf("Type the 2nd string to compare: \n");

        // Read input string into compare2 using fgets
        fgets(compare2, BUFFER_SIZE, stdin);

        // Remove newline character from compare2
        compare2[strlen(compare2) - 1] = '\0';

        // Compare the two strings and store the result in the 'result' variable
        result = strcmp(compare1, compare2);

        // Check the result of the string comparison and print appropriate message
        if (result < 0)
            printf("%s string is less than %s\n", compare1, compare2);
        else if (result == 0)
            printf("%s string is equal to %s\n", compare1, compare2);
        else
            printf("%s string is greater than %s\n", compare1, compare2);
    }

    // Incremental loop: repeat until the user enters 'q'
} while (strcmp(compare1, "q") != 0);

// Print a closing message indicating the end of the program
printf(" End of Comparing Strings Demo \n\n");
}

// Function to convert strings to integers
void converting(void) {
    // Display a message to indicate the start of the program
    printf("*** Start of Converting Strings to double Demo ***\n");

    char doubleString[BUFFER_SIZE3];
    double doubleNumber;

    // Using a do-while loop for user input
    do {
        // Prompt the user to type a double numeric string
        printf("Type the double numeric string (g - to quit): \n");

        // Read the input string from the user
        fgets(doubleString, BUFFER_SIZE3, stdin);

        // Remove the newline character at the end
        doubleString[strlen(doubleString) - 1] = '\0';

        // Check if the entered string is not "g"
        if (strcmp(doubleString, "g") != 0) {
            // Convert the string to a double using atof
            doubleNumber = atof(doubleString);

            // Display the converted number
            printf("Converted number is %f\n", doubleNumber);
        }

    } while (strcmp(doubleString, "g") != 0); // Continue until the user enters "g"

    // Display a message to indicate the end of the program
    printf("*** End of Converting Strings to double Demo ***\n\n");
}
