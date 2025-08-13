#include <stdio.h>

int main(){

    float D, R, P;

    printf("Enter the amount of dollars:");
    scanf("%f", &D);

    R = D*48;      //1$=48 Rs.
    P= R/70;
    printf("%f Dollars = %f Rupees which is equal to %f Pounds", D,R,P);

    return 0;
    
}