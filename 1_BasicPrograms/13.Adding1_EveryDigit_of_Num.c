#include <stdio.h>

int main() {
    int num, d1, d2, d3, d4, d5;
    int new_d1, new_d2, new_d3, new_d4, new_d5;
    int new_num;
    printf("Enter a five-digit number: ");
    scanf("%d", &num);
    d5 = num % 10;
    num /= 10;
    d4 = num % 10;
    num /= 10;
    d3 = num % 10;
    num /= 10;
    d2 = num % 10;
    num /= 10;
    d1 = num % 10;

    new_d1 = (d1 + 1) % 10;
    new_d2 = (d2 + 1) % 10;
    new_d3 = (d3 + 1) % 10;
    new_d4 = (d4 + 1) % 10;
    new_d5 = (d5 + 1) % 10;
    new_num = new_d1 * 10000 + new_d2 * 1000 + new_d3 * 100 + new_d4 * 10 + new_d5;
    printf("The new number is: %d\n", new_num);

    return 0;
}