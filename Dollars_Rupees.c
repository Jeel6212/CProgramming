#include <stdio.h>

int main(){

    float D, R;

    printf("Enter the amount of dollars:");
    scanf("%f", &D);

    R = D*48;      //1$=48 Rs.
    printf("%f Dollars = %f Rupees", D,R);

    return 0;
    
}