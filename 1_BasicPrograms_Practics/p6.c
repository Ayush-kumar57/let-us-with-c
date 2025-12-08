//The value not be store at any address .

// because we do not use  & operator at the starting of the p and q in the scanf function.

#include<stdio.h>
int main( )
{
int p, q ;
printf ( "Enter values of p and q" ) ;
scanf ( " %d %d ", p, q ) ;
printf ( "p = %d q =%d", p, q ) ;
return 0;
}