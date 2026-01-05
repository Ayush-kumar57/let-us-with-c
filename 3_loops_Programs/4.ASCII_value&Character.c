#include <stdio.h>
int main() {
    int ascii_value = 0;

    printf("ASCII Values and their Equivalent Characters (0-255):\n");
    while (ascii_value <= 255) {
        printf("ASCII Value: %d, Character: %c\n", ascii_value, (char)ascii_value;
        ascii_value++; 
    }
    return 0; 
}