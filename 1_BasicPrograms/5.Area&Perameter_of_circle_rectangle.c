//area of rectangle is A = l*w;
//perimeter of rechatgle is P =2(l+w);

//area of circle A= pai*r*r;
//perimeter of circle  P = 2*pai*r;

#include<stdio.h>
#include<math.h>
#define PI_DEFINE 3.14159265358979323846;
int main(){
    float length , width ,radius;
    float perimeter_rec , area_rec, perimeter_cirl,arae_cirl ;

    printf("Enter the lenght , width and radius : ");
    scanf("%f %f %f", &length, &width,&radius);

    area_rec =length * width ;
    perimeter_rec = 2*(length + width);

    arae_cirl =  PI_DEFINE * sqrt(radius); //also use M_PI for pi value.
    perimeter_cirl = 2 * PI_DEFINE * radius;
    
    printf("The area of rectangle is %f",area_rec);
    printf("The perimeter  of rectangle is %f",perimeter_rec);
    printf("The area of circle is %f",arae_cirl);
    printf("The perimeter of circle is %f",perimeter_cirl);
    
    return 0;
}
