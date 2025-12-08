#include<stdio.h>
int main(){
    //hardness >50
    //carbon < 0.7
    //tensil >5600
    int hardness , tensil;
    float carbon;
    printf("Enter the Hardness of steal :\n");
    scanf("%d", &hardness);
    printf("Enter the carbon of steal :\n");
    scanf("%f", &carbon);
    printf("Enter the tensil of steal :\n");
    scanf("%d", &tensil);
    if((hardness > 50) && (carbon < 0.7) && (tensil > 5600 )){
        printf("Grade 10 is given at %d %.1f %d", hardness, carbon , tensil);
    }else if ((hardness > 50 )&& (carbon < 0.7)){
        printf("Grade 9 is give at %d %.1f ", hardness, carbon);
    }else if((carbon < 0.7) && (tensil > 5600 )){
        printf("Grade 8 is given at %.1f %d ", carbon,tensil);
    }else if ((hardness > 50 ) && (tensil >5600)){
        printf("Grade 7 is given at %d %d",hardness,tensil);
    }else if((hardness > 50)||(carbon < 0.7)||(tensil>5600)){
        printf("Grade 6 is given at %d %.1f %d",hardness,carbon,tensil);
    }else{
        printf("Grade 5 not any condition match.");
    }
    
    return 0;
}