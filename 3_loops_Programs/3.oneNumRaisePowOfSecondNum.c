#include<stdio.h>
int main(){
    int num1 , num2 ,result=1;
    printf("Enter the Value of Num1 and Num2 :");
    scanf("%d %d", &num1, &num2); 
    for(int i= 0 ; i<num2; i++){
        result = result*num1;
    }
    printf("%d ",result);
    return 0;
}