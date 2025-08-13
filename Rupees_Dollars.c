#include <stdio.h>

int main(){

    float D, R;

    printf("Enter the amount of Rupees:");
    scanf("%f", &R);

    D= R/48;      //1$=48 Rs.
    printf("%f Rupess = %f Dollars ", R,D);

    return 0;
    
}