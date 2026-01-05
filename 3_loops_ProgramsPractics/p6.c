#include<stdio.h>
int main(){
    // printf("First Progam :");
    // char x ;  // infinite because char limit in 126 to 127. after it go negative char
    // for ( x = 0 ; x <= 255; x++ )
    // printf ( "\nAscii value %d Character %c", x, x ) ;

    printf("\nSecond Program :");
    int x = 4, y = 0 ;
    while ( x >= 0 ) 
    {
    x-- ; 
    y++ ;
    if ( x == y )
        continue;
    else
        printf ("\n %d %d", x, y ) ;


    printf("\nThird Program :");
    int a = 4, b = 0;
    while ( a >= 0 )
    {
    if ( a == b )
        break ;
    else
        printf ( "\n%d %d", a, b ) ;
    a-- ;
    b++ ;
    }
    return 0;
}
}