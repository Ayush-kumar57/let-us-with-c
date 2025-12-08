#include<stdio.h>
int main()
{
    int Number , Reverse = 0 , Reminder;
    printf("Enter the five digit int number :");
    scanf("%d",&Number); //32421     12423

    Reminder = Number % 10 ; //1
    Reverse = ( Reverse * 10 )+Reminder;
    Number/= 10;

    Reminder = Number % 10 ; //1
    Reverse = ( Reverse * 10 )+Reminder;
    Number/= 10;

    Reminder = Number % 10 ; //1
    Reverse = ( Reverse * 10 )+Reminder;
    Number/= 10;

    Reminder = Number % 10 ; //1
    Reverse = ( Reverse * 10 )+Reminder;
    Number/= 10;

    Reminder = Number % 10 ; //1
    Reverse = ( Reverse * 10 )+Reminder;
    Number/= 10;


    printf("The Reverse is %d", Reverse);

    return 0;
}