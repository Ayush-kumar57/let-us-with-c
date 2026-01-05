#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *srcFile, *destFile;
    char sourcePath[100], destPath[100], ch;

    // Get file names from user
    printf("Enter source file name: ");
    scanf("%s", sourcePath);
    printf("Enter destination file name: ");
    scanf("%s", destPath);

    // Open source file in read mode
    srcFile = fopen(sourcePath, "r");
    if (srcFile == NULL) {
        printf("Error: Cannot open source file.\n");
        exit(1);
    }

    // Open destination file in write mode
    destFile = fopen(destPath, "w");
    if (destFile == NULL) {
        printf("Error: Cannot create destination file.\n");
        fclose(srcFile);
        exit(1);
    }

    // Read from source and write to destination
    while ((ch = fgetc(srcFile)) != EOF) {
        fputc(ch, destFile);
    }

    printf("\nFile copied successfully from %s to %s.\n", sourcePath, destPath);

    // Close both files
    fclose(srcFile);
    fclose(destFile);

    return 0;
}