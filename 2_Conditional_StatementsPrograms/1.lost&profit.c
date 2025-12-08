#include<stdio.h>
int main(){
    int cost_price,selling_price, profit;
    printf("Enter the cost price and seeling price :");
    scanf("%d %d", &cost_price,&selling_price);
    //200/ 400
    profit = selling_price - cost_price ;
    if(profit>0)
        printf("you are in profit of %d",profit);
    else    
        printf("you are in loss of %d", profit);
    
    return 0;
}