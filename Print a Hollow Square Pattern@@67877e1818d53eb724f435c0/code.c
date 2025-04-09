#include <stdio.h>

int main() {
    int N;

    // Ask the user for the side length of the square
    printf("Enter an integer N representing the side length of the square: ");
    scanf("%d", &N);  // Using scanf to take an integer input for the side length

    // Loop through rows
    for (int i = 0; i < N; i++) {
        // Loop through columns
        for (int j = 0; j < N; j++) {
            // Print '*' for the borders and space for the inside of the square
            if (i == 0 || i == N - 1 || j == 0 || j == N - 1) {
                printf("* ");
            } else {
                printf("  ");
            }
        }
        printf("\n"); // Move to the next line after each row
    }

    return 0;
}


