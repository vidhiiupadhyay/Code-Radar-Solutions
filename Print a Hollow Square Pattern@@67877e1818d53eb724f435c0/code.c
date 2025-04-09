#include <stdio.h>

int printHollowSquare(int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            // Print '*' for the borders and space for the inside of the square
            if (i == 0 || i == size - 1 || j == 0 || j == size - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }
    return 0;  // Return 0 to indicate the function ran successfully
}

int main() {
    int size;

    // Ask the user for the size of the hollow square
     printf("Enter the size of the hollow square: ");
    scanf("%d", &size);  // Using scanf to take input for the size

    // Call the function to print the hollow square
    printHollowSquare(size);

    return 0;
}
