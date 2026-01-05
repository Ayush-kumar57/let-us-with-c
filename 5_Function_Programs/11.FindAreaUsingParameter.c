#include<stdio.h>
int main(){
    int radius ;
    float area , perimeter;

    printf("Enter radius of a Circle:");
    scanf("%d",&radius);
    areaperi(radius, &area ,&perimeter);

    printf("Area = %f",area);
    printf("\n Perimeter = %f", perimeter);
    return 0 ;

}
int areaperi ( int r, float *a, float *p )
    {
    *a = 3.14 * r * r ;
    *p = 2 * 3.14 * r ;
    }