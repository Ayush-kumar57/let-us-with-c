#include <stdio.h>
#define SQUARE(x) ((x) * (x))

int main() {
    int num, result;
    int a = 2, b = 3;
    printf("Enter a number to square: ");
    scanf("%d", &num);
    printf("Square of %d is %d\n", num, SQUARE(num));

    result = SQUARE(a + b); 
    printf("\nArithmetic Expression Test:\n");
    printf("The square of (%d + %d) is %d\n", a, b, result);
    printf("Ayush Kumar\n");
    printf("25SCSE2030146\n");

    return 0;
}