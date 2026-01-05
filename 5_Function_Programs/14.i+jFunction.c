#include<stdio.h>
int add(int i , int j){
    int sum ;
    sum = i + j;
    return sum ;
}
int main(){
    int a = 5,b = 2 ,c ;
    c = add(a,b);
    printf("Sum = %d",c);
    return 0;
}
