#include<stdio.h>
int main()
{
    int four_digitNum , first_digit ,last_digit , Sum ; //1234   5
    printf("Enter the four digit Number :");
    scanf("%d",&four_digitNum);

    last_digit = four_digitNum % 10 ;

    first_digit = four_digitNum / 1000;

    Sum = first_digit + last_digit ;

    printf("The total of first and last digit is %d" , Sum);
    
    
    return 0;
}