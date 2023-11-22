// Define constants
#define CRT_SECURE_NO_WARNINGS
#define BUFFER_SIZE 80
#define NUM_INPUT_SIZE 10
#define BUFFER_SIZES 300


// Include necessary header file
#include "v1.h"
#include <stdio.h>
#include <stdlib.h> // for NULL
#include <string.h> // for strlen, strcmp

// Function to demonstrate indexing strings
void fundamentals(void) {
    // VI
    printf(" Start of Indexing Strings Demo \n");

    // Declare character arrays and variables
    char buffer1[BUFFER_SIZE];
    char numInput[NUM_INPUT_SIZE];
    size_t position;

    // Loop for user input
    do {
        printf("Type a non-empty string (q - to quit):\n");
        fgets(buffer1, BUFFER_SIZE, stdin);
        buffer1[strlen(buffer1) - 1] = '\0'; // Remove newline character

        // Check if the user wants to quit
        if (strcmp(buffer1, "q") == 0) {
            break;
        }

        // Get the character position within the string
        printf("Type the character position within the string:\n");
        fgets(numInput, NUM_INPUT_SIZE, stdin);
        numInput[strlen(numInput) - 1] = '\0'; // Remove newline character
        position = atoi(numInput);

        // Ensure position is within bounds
        if (position >= strlen(buffer1)) {
            position = strlen(buffer1) - 1;
            printf("Too big... Position reduced to max available.\n");
        }

        // Print the character at the specified position
        printf("The character found at position %d is '%c'.\n", (int)position, buffer1[position]);

    } while (strcmp(buffer1, "q") != 0);

    printf(" End of Indexing Strings Demo \n\n");
}

// Function to tokenize words
void tokenizing(void) {
    printf(" Start of Tokenizing Words Demo \n");

    // Declare an array to store input wordss
    char words[BUFFER_SIZES];

    // Pointer to the next word
    char* nextWord = NULL; 

    // Counter for the words
    int wordsCounter;

    // Get input from the user until 'q' is entered
    do {
        nextWord = NULL;
        wordsCounter = 1;

        // Prompt the user to enter words
        printf("Type a few words separated by space (q to quit):\n");
        fgets(words, BUFFER_SIZES, stdin);

        // Remove the newline character at the end
        words[strlen(words) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(words, "q") != 0) {
            // Tokenize the input string using strtok
            nextWord = strtok(words, " ");

            // Process each tokenized word
            while (nextWord) {
                printf("Word #%d is '%s'\n", wordsCounter++, nextWord);
                // Get the next token
                nextWord = strtok(NULL, " ");
            }
        }
    } while (strcmp(words, "q") != 0);

    printf(" End of Tokenizing Words Demo \n\n");
}

// Function definition for manipulating
void manipulating(void) {
  // Print a message
  printf(" Start of Concatenating Strings Demo \n");

  // Declare character arrays for storing strings with a size of BUFFER_SIZE * 2
  char string1[BUFFER_SIZE * 2];
  char string2[BUFFER_SIZE]; // Corrected the declaration of string2

  // Loop until the user enters "q"
  do {
    // Prompt the user to enter the 1st string
    printf("Type the 1st string (q to quit) :\n");

    // Read input from the user and store it in string1
    gets(string1);

    // Check if the entered string is not equal to "q"
    if (strcmp(string1, "q") != 0) {
      // Prompt the user to enter the 2nd string
      printf("Type the 2nd string:\n");

      // Read input from the user and store it in string2
      gets(string2);

      // Concatenate string2 to string1
      strcat(string1, string2);

      // Print the concatenated string
      printf("Concatenated string is '%s'\n", string1);
    }

    // Continue looping until the user enters "q"
  } while (strcmp(string1, "q") != 0);


      // Print a message
      printf(" End of Concatenating Strings Demo \n\n");
}

// Function to convert strings to integers
void converting(void) {
    // Display a message indicating the start of the demo
    printf("*** Start of Converting Strings to int Demo ***\n");

    // Declare variables to store the input string and converted integer
    char intstring[BUFFER_SIZE];
    int intNumber;

    // Repeat the conversion process until the user enters "g" to quit
    do {
        // Prompt the user to enter an integer string
        printf("Type an int numeric string (\"g\" to quit): \n");

        // Read the input string from the user
        fgets(intstring, BUFFER_SIZE, stdin);

        // Remove the newline character from the input string
        intstring[strlen(intstring) - 1] = '\0';

        // Check if the user entered "g" to quit
        if (strcmp(intstring, "g") != 0) {
            // Convert the string to an integer using atoi
            intNumber = atoi(intstring);

            // Display the converted integer
            printf("Converted number is %d\n", intNumber);
        }
    } while (strcmp(intstring, "g") != 0);  // Continue the loop until the user enters "g"
}