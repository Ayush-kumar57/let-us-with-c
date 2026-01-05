#include<stdio.h>

rec(int x){
    int f;
    if(x==0)
        return(1);
    else
        f = x*rec(x-1);
    return(f);
}
int main(){
    int a , fact ;

    printf("\nEnter any Number: ");
    scanf("%d",&a);
    fact =rec(a);
    printf("Factorial value = %d",fact);

    return 0;
}