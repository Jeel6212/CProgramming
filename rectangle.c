#include <stdio.h>

int main(){

    int length, breadth, area, perimeter;

    printf("Enter value of length and breadth:");
    scanf("%d %d", &length, &breadth);

    area= length*breadth;
    perimeter= 2*(length + breadth);

    printf("Area and Perimeter of rectangle is : %d , %d", area, perimeter);

    return 0;

}