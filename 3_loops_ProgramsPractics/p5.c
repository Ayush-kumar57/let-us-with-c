#include<stdio.h>
int main(){
    printf("First Program :");
    int i ;
    // while ( i = 10 )    
    // {
    // printf ( "\n%d", i ) ;
    // if(i== 15){
    //     break;
    // }else{
    // i=i+1;
    // }
    // }
    printf("\nSecond Program :");

    float x = 1.1;  // here x = 1.0000000001
    while ( x == 1.1)//condition false and x here is 1.1 not equal.
    {
    printf("%.2f",x);
    x = x - 0.1 ;
    }

    printf("\nThird Program :");
    while ( '1' < '2' )  //infinite loop condition never false.
    printf ( "\nIn while loop" ) ;
  
    return 0;
}