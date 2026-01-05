#include<stdio.h>
int main(){
    int employee = 10,hours,salary=0, overtime = 12;
for(int i =1 ; i < employee+1; i++){
    printf("\n");
    printf("Working Hours of %d employee:",i);
    scanf("%d",&hours);
    if(hours >= 40){
        salary = hours * overtime;
        printf(" Overtime salary of%d  employee :%d\n ",i,salary);

    }else{
        salary = 0;
        printf("No increment in overtime :%d\n",salary);
    }
}
    return 0;

}