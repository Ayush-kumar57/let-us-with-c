#include<stdio.h>
int main(){
    int x, min, max ;
    printf("Enter value of max and x :");
scanf ( "\n%d %d", &max, &x ) ;
if ( x > max ){
max = x ;
printf("%d is maximum.", max);
}
else{
min = x ;
printf("%d is minimum.",min);
}

    return 0;
}