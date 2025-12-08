#include<stdio.h>
int main(){
    int a ,b,c,triangle;
    printf("Enter the degree of angle :");
    scanf("%d %d %d", &a ,&b ,  &c);
    triangle = a + b +c ;
    if(triangle == 180 )
        printf("This a right angle triagle ");
    else
        printf("This is not a right angle triangle.");    
    
    return 0;
}