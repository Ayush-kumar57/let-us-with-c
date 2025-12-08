#include<stdio.h>
int main(){
    int C ,D, temp ;
    printf("Enter the value of C and D :");
    scanf("%d %d" , &C ,&D);
    
    temp = C ;
    C = D ;
    D = temp;

    printf("The value of C and D now interchage is %d %d" , C ,D);
    return 0 ;
}