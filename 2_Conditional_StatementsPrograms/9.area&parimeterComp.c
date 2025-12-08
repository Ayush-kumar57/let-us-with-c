#include<stdio.h>
int main(){
    int length, width;
    int area_of_rectangle , parimeter_of_rectangle ;
    printf("Enter the length and width of rectangle :");
    scanf("%d %d",&length , &width);
    if(length > width){
    area_of_rectangle = length * width ;
    printf("Area of rectangle is :%d\n", area_of_rectangle);
    parimeter_of_rectangle = 2*(length + width);
    printf("Parimeter of rectangle is %d :", parimeter_of_rectangle);
    }
    return 0;
}