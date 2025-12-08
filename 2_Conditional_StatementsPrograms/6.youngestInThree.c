#include<stdio.h>
int main(){
    int Ram ,Shyam ,Ajay;
    printf("Enter the age of all : 1st Ram , then Shyam and then Ajay");
    scanf("%d %d %d",&Ram,&Shyam ,&Ajay);

    if(Ram >Shyam){
        if(Ram>Ajay){
            printf("Ram is youngest.");
        }
        else{
            printf("Ajay is youngest.");
        }
        
    }else if(){
        printf("Shyam is youngest.");
    }
    return 0;
}