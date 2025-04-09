#include <stdio.h>

void printHollowSquare(int size) {
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
}

int main() {
    int size;

    // Get the size of the square from the user
    printf("Enter the size of the hollow square: ");
    scanf("%d", &size);

    // Call function to print hollow square
    printHollowSquare(size);

    return 0;
}
