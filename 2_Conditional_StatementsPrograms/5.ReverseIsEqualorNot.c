#include<stdio.h>
int main(){
    int five_digit_num , reverse =0 , reverse_number , digit;
    printf("Enter a Five digit number :");
    scanf("%d",&five_digit_num); //54678
    int original_number = five_digit_num;
    digit = five_digit_num % 10;
    reverse  = (reverse  * 10) + digit;
    five_digit_num/=10;

    digit = five_digit_num % 10;
    reverse  = (reverse  * 10) + digit;
    five_digit_num/=10;

    digit = five_digit_num % 10;
    reverse  = (reverse  * 10) + digit;
    five_digit_num/=10;

    digit = five_digit_num % 10;
    reverse  = (reverse  * 10) + digit;
    five_digit_num/=10;

    digit = five_digit_num % 10;
    reverse  = (reverse  * 10) + digit;
    five_digit_num/=10;

    int duplicate_number = reverse;

    if(original_number == duplicate_number)
        printf("The numbers are equal.");
    else
        printf("The number are not equal");    

    return 0;
}