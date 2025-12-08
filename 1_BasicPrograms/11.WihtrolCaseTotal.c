#include<stdio.h>
int main(){
    int Acctual_Amount,Amount ,remaining_amount ,reminder, reminder2,remainig_amount1;
    int TotalNo_of_Notes;
    printf("Enter the amount :");
    scanf("%d", &Amount);      //3240
    Acctual_Amount = Amount / 100; //32
    reminder =  Amount% 100;     //40
    if(reminder > 50){
        remainig_amount1 = reminder / 50;
        reminder2 = remaining_amount % 50;

    }   
    else{
        reminder2 = reminder % 50;
    }     
    remainig_amount1 =  reminder2 / 10 ; 

    TotalNo_of_Notes = Acctual_Amount +remaining_amount +remainig_amount1  ;
    
    printf("The Total Number of 100 notes is : %d\n", Acctual_Amount);
    printf("The Total Number of 50 notes is : %d\n", remaining_amount);
    printf("The Total Number of 10 notes is : %d\n", remainig_amount1);
    printf("The Total Number of notes is : %d", TotalNo_of_Notes);
   




    return 0;

}