#include<stdio.h>
int main(){
    int Number;
    printf("Enter the Number that is not 0 : ");
    scanf("%d", &Number);
    
    if(Number % 2 == 0)
        printf("The %d is Even", Number);
    else
        printf("The %d is Odd", Number);    
    return 0;
}