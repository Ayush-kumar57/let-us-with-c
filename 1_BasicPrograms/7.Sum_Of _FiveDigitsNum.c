#include<stdio.h>
int main(){
    int Number ,Reminder ,Sum_of_Number=0;
    printf("Enter the five Digit Integer Number :");
    scanf("%d",&Number); //54361

    
    Reminder = Number % 10; //
    Sum_of_Number = Sum_of_Number +Reminder;
    Number/=10;

     Reminder = Number % 10; //-
    Sum_of_Number = Sum_of_Number +Reminder;
    Number/=10;

     Reminder = Number % 10; //-
    Sum_of_Number = Sum_of_Number +Reminder;
    Number/=10;

     Reminder = Number % 10; //-
    Sum_of_Number = Sum_of_Number +Reminder;
    Number/=10;

     Reminder = Number % 10; //-
    Sum_of_Number = Sum_of_Number +Reminder;
    Number/=10;

    printf("%d",Sum_of_Number);


    return 0;
}