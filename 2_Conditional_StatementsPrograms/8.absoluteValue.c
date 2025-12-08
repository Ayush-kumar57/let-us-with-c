#include<stdio.h>
int main(){
    int absolute_valuse;
    printf("Enter the value :");
    scanf("%d",&absolute_valuse);
    if(absolute_valuse < 0){
    absolute_valuse = - absolute_valuse;
    }
    printf("absolute value is %d", absolute_valuse);
    return 0;
}
