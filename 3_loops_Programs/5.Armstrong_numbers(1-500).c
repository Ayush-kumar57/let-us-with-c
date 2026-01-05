#include<stdio.h>
int main(){
    int Number ,digit,unitDigit, secondDigit, thirdDigit;
    printf("Enter the Number between 1 to 500.");
    scanf("%d",&Number);
    if((Number>=1) && (Number<=500)){//153
    for(int i = 1; i<=3;i++){
    digit = Number % 10; //3
    unitDigit= digit*digit*digit; //27

    Number/=10;// 15
    digit= Number%10; //5 
    secondDigit =digit*digit*digit; //125

    Number/=10;//1
    digit = Number%10; //1
    thirdDigit=digit*digit*digit;  //1

    printf("%d ", unitDigit+secondDigit+ thirdDigit);

    }

    }else{
        printf("Enter between 1 to 500.");
    }
    return 0;
}