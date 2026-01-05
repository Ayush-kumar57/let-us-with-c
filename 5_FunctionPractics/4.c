#include <stdio.h>

long int factorial(int n);
long int factorial(int n) {
    if (n <= 1) {
        return 1; 
    } else {
        return n * factorial(n - 1); 
    }
}
int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error! Factorial of a negative number doesn't exist.\n");
    } else {
        printf("Factorial of %d = %ld\n", num, factorial(num));
    }
    printf("Ayush Kumar\n");
    printf("25SCSE2030146\n");

    return 0;
}
