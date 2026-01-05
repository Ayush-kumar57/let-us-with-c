#include <stdio.h>

int calculateSum(int arr[], int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        sum += arr[i]; 
    }
    return sum;
}

int main() {
    int n, arr[100];

    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    printf("Enter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int totalSum = calculateSum(arr, n);
    printf("\nThe sum of all elements in the array is: %d\n", totalSum);
    printf("Ayush Kumar\n");
    printf("25SCSE2030146\n");

    return 0;
}