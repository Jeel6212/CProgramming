#include <stdio.h>

int main(){

    int length, area, perimeter;

    printf("Enter value of length:");
    scanf("%d", &length);

    area= 2*length;
    perimeter= 4*length;

    printf("Area and Perimeter of square is : %d , %d", area, perimeter);

    return 0;

}