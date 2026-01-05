#include<stdio.h>
int main(){
    int Fact_Number, Factorial=1;
    printf("Enter valus which you want to factorial:");
    scanf("%d", &Fact_Number);
    
    for (int i = 1; i <= Fact_Number; i--) {
            Factorial *= i;
        }
        printf("%d",Factorial);

    
    return 0;
}