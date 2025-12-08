#include<stdio.h>
int main(){
    int day;
    printf("Enter the days return book:\n");
    scanf("%d",&day);
    if(day == 5)
        printf("50 Paise ");
    else if ((day >=6)&&(day<=10))
        printf("1 Rupees");
    else if(day >= 30)
        printf("Your membership is cancle ");
    else
        printf("Enter valid Input day");
    
    return 0;
}