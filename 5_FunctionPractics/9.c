#include <stdio.h>
#include <ctype.h>

int main() {
    char line[200];
    int i, vowels = 0, characters = 0, spaces = 0;

    printf("Enter a line of text: ");
    // fgets reads the entire line including spaces
    fgets(line, sizeof(line), stdin);

    for (i = 0; line[i] != '\0'; i++) {
        // Count total characters (excluding the newline character)
        if (line[i] != '\n' && line[i] != '\0') {
            characters++;
        }

        // Convert to lowercase to check for vowels easily
        char c = TOLOWER(line[i]);
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u') {
            vowels++;
        }

        // Count blank spaces
        if (line[i] == ' ') {
            spaces++;
        }
    }

    printf("\n--- Results ---\n");
    printf("Total Characters: %d\n", characters);
    printf("Total Vowels:     %d\n", vowels);
    printf("Total Spaces:     %d\n", spaces);

    return 0;
}