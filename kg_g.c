#include <stdio.h>

int main(){

    float g, kg;
    printf("Enter kg value:");
    scanf("%f", &kg);

    g = kg*1000;
    printf("Value of %f kg in g is %f", kg,g);

    return 0;

}