#include <stdio.h>

int main(){

    float g, kg;
    printf("Enter gram value:");
    scanf("%f", &g);

    kg = g/1000;
    printf("Value of %f gram in kg is %f", g,kg);

    return 0;

}