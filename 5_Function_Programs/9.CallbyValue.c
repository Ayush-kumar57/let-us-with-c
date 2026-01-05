#include<stdio.h>
int main(){
    int a = 10 ,b= 20;
    Swap(a,b);
    printf("\na =%d  b=%d",a ,b);
    return 0;
}
int Swap(int x , int y ){
    int t;
    t= x;
    x=y;
    y=t;
    printf("\nx=%d y=%d",x,y);
}