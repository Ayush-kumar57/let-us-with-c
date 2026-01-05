#include<stdio.h>
int main(){
    printf("First Program :");
    int x = 1 ;
    while ( x == 1 )
    {
    x=x-1; // here value of x is 1-1 = 0 . // after that condition is false loop not run again.
    printf ( "\n%d", x ) ;
    }

    printf("\nSecond Program :");
    int y = 1 ;
    while ( y == 1 ){
    y=y-1;
    printf ( "\n%d", y ) ;
    }

    printf("\nThird Program :");
    char a=0;
    while (a<=126){
    printf ( "\nAscii value %d Character %c", a, a ) ;
    if(a==255){
        break;
    }
    a++;
    }
    return 0;
}