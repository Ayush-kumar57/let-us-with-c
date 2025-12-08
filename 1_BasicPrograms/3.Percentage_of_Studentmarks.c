#include<stdio.h>
int main(){
    float sub1, sub2 ,sub3, sub4, sub5 ;
    float percentage;
    printf("Enter the marks of student all five sub:");
    scanf("%f  %f %f %f %f",&sub1 ,&sub2,&sub3,&sub4,&sub5);

    percentage = ((sub1+sub2+sub3+sub4+sub5)/500)*100;
    printf("The percentage of student marks is %f", percentage);
    
    

    return 0;
}