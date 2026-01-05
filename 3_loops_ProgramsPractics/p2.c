#include<stdio.h>
int main(){
    printf("Now j values will be print :\n");
    int j=1;
    while ( j <= 10 )
    {
    printf( "\n%d",j);
    j=j+1;
    }
    printf(" \n ");
    printf("\nNow i values will be print :\n");
    int i = 1 ;
    while ( i <= 10 ) 
    {
    printf ( "\n%d", i ) ;
    i++;
    }
    int k ;// Not print because we will not assinge k value.
    while ( k <= 10 )
    {
    printf ( "\n%d", k ) ;
    k=k+1;
    }

    

    return 0;
}