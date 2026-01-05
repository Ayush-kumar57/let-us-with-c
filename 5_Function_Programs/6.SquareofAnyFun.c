#include<stdio.h>
float Square(float x){
    float y ;
    y= x*x;
    return(y);
}
int main( ){
    float a, b ;
    printf ( "\nEnter any number " ) ;
    scanf ( "%f", &a ) ;
    b = Square ( a ) ;
    printf ( "\nSquare of %f is %f", a, b ) ;

    }


