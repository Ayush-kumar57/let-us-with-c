#include<stdio.h>
int increase(int i );
int increase(int i ){
    printf("\n%d %d %d",i, i++,++i);
}
int main(){
    increase(1);
    return 0;
}

