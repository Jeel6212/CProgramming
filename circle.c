#include <stdio.h>

int main(){
    float r, area;

    printf("Enter Radius :");
    scanf("%f", &r);

    area= (22.0/7.0)*r*r;
    printf("The area of the circle is %f\n",area); 
             
    return 0;

}