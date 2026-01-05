#include<stdio.h>
int main(){
    int num ,i ;
    int is_prime;
    for (num= 1;num<300;num++)
    {
        if(num== 1 ||num==0){
            continue;
        }
        is_prime=1;
        for(i=2;i<num;i++){
            if(num % i==0){
                is_prime = 0;
                break;
            }
        }
        if(is_prime == 1){
            printf("%d\n",num);
        }
    }
    printf("\n");
    
    return 0;
}