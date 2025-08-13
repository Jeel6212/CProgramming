#include <stdio.h>

int main(){

    int h,l,area;
    printf("Enter the value of length and height\n");
    scanf("%d %d", &h, &l);

    area= h*l/2;
    printf("Area of triangle is = %d", area);

    return 0;
}