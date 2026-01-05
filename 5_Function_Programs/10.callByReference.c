#include<stdio.h>
int main(){
    int a = 10 , b =20;
    printf("before Swapping :%d %d",a , b);
    swap(&a , &b);
    printf("\nAfter Swapping :\na=%d b=%d",a,b);
    return 0;
}
int swap(int *x , int *y){
    int t= *x;
    *x = *y;
    *y = t;
    

}