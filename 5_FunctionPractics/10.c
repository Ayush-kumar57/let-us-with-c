#include <stdio.h>

void swap(int *a, int *b) {
    int temp;
    temp = *a;    
    *a = *b;      
    *b = temp;    
}

int main() {
    int x, y;
    printf("Enter two numbers (x and y): ");
    scanf("%d %d", &x, &y);
    printf("\nBefore Swapping: x = %d, y = %d\n", x, y);
    swap(&x, &y);
    printf("After Swapping:  x = %d, y = %d\n", x, y);
     printf("Ayush Kumar\n");
    printf("25SCSE2030146\n");
    return 0;
}