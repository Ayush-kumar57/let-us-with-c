#include <stdio.h>
int main()
{
    long decimalnum, reminder, r1,r2,r3,r4;
    long octalnum = 0;
    long i = 1;
    printf("Enter a decimal number: ");

    scanf("%ld", &decimalnum);

    if (decimalnum == 0)
    {
        printf("Equivalent octal value is 0 \n");
        return 0;
    }
    else
    {
        printf("Only for two digit.");
        if((decimalnum>0)&&(decimalnum<100)){
        octalnum=decimalnum/8; //31 = 3 
        reminder= decimalnum % 8; //7
        octalnum =(octalnum*10)+reminder;
    }else if((decimalnum>=100)&&(decimalnum<999)){
        
        r1=decimalnum % 8; //7
        octalnum=decimalnum/8;  // 64
        r2= octalnum % 8;
        octalnum = octalnum /8; 
        r3 = octalnum % 8;
        octalnum = octalnum /8 ;
        r4= octalnum % 8;
        octalnum =octalnum / 8; 

        octalnum =(r4*1000)+(r3*100)+(r2*10)+r1;
        printf("%ld",octalnum);
        
        
        
    }
        
        
    }
    printf("Equivalent octal value :%ld\n", octalnum);

    return 0;
}