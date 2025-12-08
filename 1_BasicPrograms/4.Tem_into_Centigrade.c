#include<stdio.h>
int main(){
    float Fahrenheit,centigrade;
    printf("Enter the temperature in centigrade :");
    scanf("%fC",&centigrade);
    Fahrenheit = (centigrade *9/5)+32;
    printf("Temprature in Fahrenheit is %.2fF \n", Fahrenheit);

    return 0;
}