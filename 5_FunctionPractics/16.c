#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char filename[100], ch;
    printf("Enter the filename to open (e.g., test.txt): ");
    scanf("%s", filename);
    fptr = fopen(filename, "r");
    if (fptr == NULL) {
        printf("Error: Could not open file %s. Make sure it exists.\n", filename);
        exit(0);
    }

    printf("\n--- Contents of %s ---\n", filename);
    ch = fgetc(fptr);
    while (ch != EOF) {
        printf("%c", ch);
        ch = fgetc(fptr);
    }

    fclose(fptr);
    printf("\n---------------------------\n");
    printf("Ayush Kumar\n");
    printf("25SCSE2030146\n");
    return 0;
}