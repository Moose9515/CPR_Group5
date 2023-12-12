// Necessary header files
#include "v3.h"
#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

// Main function to run different modules
int main(void) {
    char buff[10]; // Buffer to store user input

    // Loop to display a menu and execute selected modules
    do {
        // Display module options to the user
        printf("Which module to run?\n");
        printf("1 - Fundamentals\n");
        printf("2 - Manipulating\n");
        printf("3 - Converting\n");
        printf("4 - Tokenizing\n");
        printf("0 - Finish\n");
        printf("Your selection: ");

        // Read user input into the buffer
        fgets(buff, 10, stdin);

        // Switch statement to execute the selected module
        switch (buff[0]) {
            case '1':
                fundamentals();
                break;
            case '2':
                manipulating();
                break;
            case '3':
                converting();
                break;
            case '4':
                tokenizing();
                break;
            case '0':
                break; // Exit the loop when '0' is selected
            default:
                printf("Bad selection!\n"); // Display error message for invalid input
        }
    } while (buff[0] != '0'); // Continue the loop until '0' is selected

    return 0; // Return 0 to indicate successful program execution
}
