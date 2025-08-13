#include <stdio.h>

int main(){
    float c, f;

    printf("Enter value of farenheit:");
    scanf("%f", &f);

    c= 5.0/9.0*(f-32.0);
    printf("The value of celsius is %f", c);

} 