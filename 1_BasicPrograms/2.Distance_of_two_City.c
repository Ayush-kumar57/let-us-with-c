#include<stdio.h>
int main(){
    float km ,meter , feet , inches , centimeters;
    printf("Enter the distance of both city in km :");
    scanf("%f",&km);
    meter = km * 1000; // 1 km = 1000 meter 
    centimeters = meter * 100; // 1 meter = 100 centimeter 
    feet = meter * 3.28084;  // 1 meter = 3.28084 feet 
    inches = feet * 12 ; // 1 foot = 12 inches 

    printf("The distance in meter is %.2f\n", meter);
    printf("The distance in centimeters is %.2f\n", centimeters);
    printf("The distance in feet is %.2f\n", feet);
    printf("The distance in inches is %.2f\n", inches);

    return 0;

}