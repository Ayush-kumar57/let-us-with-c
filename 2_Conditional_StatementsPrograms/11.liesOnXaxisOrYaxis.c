#include <stdio.h>

int main() {
    double x, y;
    printf("Enter the x-coordinate: ");
    scanf("%lf", &x);
    printf("Enter the y-coordinate: ");
    scanf("%lf", &y)

    if (x == 0 && y == 0) {
        printf("The point (%.2f, %.2f) lies at the origin.\n", x, y);
    } else if (x == 0) {
        printf("The point (%.2f, %.2f) lies on the y-axis.\n", x, y);
    } else if (y == 0) {
        printf("The point (%.2f, %.2f) lies on the x-axis.\n", x, y);
    } else {
        printf("The point (%.2f, %.2f) lies neither on the x-axis nor the y-axis.\n", x, y);
    }

    return 0;
}