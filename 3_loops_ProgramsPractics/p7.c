#include<stdio.h>
int main(){

    printf("First Program:");
    int a ;
    for ( a = 1 ; a <= 5 ; printf ( "\n%d", a ) ) ;  // infinite because loop is close before the i++ operator.
    a++ ;


    printf("\n\nSecond Program :");
    int i = 1, j = 1 ;
    for ( ; ; )
    {
        if ( i > 5 )
            break ;
        else
            j += i ;
        printf ( "\n%d", j ) ;
            i += j ;  
    }

    printf("\n\nThird Program:");
    
    int k ;  //this is also infinite loop print the ascii character of 65 (A).
    for(k=0;k<=5;printf("\n%c",65));
    k++;
    return 0;
}