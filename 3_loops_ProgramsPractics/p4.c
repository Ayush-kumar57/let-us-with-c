#include<stdio.h>
int main( )
{
    printf("First Program :");    
    int x = 4, y, z ;
    y = --x ;
    z = x-- ;
    printf ( "\n%d %d %d", x, y, z ) ;

    printf("\nSecond Program :"); 
    int a= 4, b = 3, c ;
    z = (a--) -(b) ;
    printf ( "\n%d %d %d", a, b, c ) ;

    printf("\nThird Program :");     
    while ( 'a' < 'b' ){
    printf ( "\nmalyalam is a palindrome" ) ;
    break;
    }


    printf("\nFourth Program :");  
    int i = 10 ;
    while ( i == 20 ){
    printf ( "\nA computer buff!" ) ;
    i++;
    }

return 0;
}