#include<stdio.h>
int main(){
    float seeling_price_of_15item , cost_price , total_profit,cost_price_per_item;;
    printf("Enter the seeling price :");
    scanf("%f" , &seeling_price_of_15item );
    printf("Enter the profit :");
    scanf("%f" , &total_profit );
    cost_price = seeling_price_of_15item  - total_profit;
    printf("The cost price of all item is :%.2f\n", cost_price);
    cost_price_per_item = cost_price / 15 ;

    printf("The cost price of single item is :%.2f\n" , cost_price_per_item);
    return 0;
}







































