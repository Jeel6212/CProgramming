#include <stdio.h>

int main(){

    float P, N, R, I;

    printf("Enter the Principal amount (P): ");
    scanf("%f", &P);

    printf("Enter the Time in years (N): ");
    scanf("%f", &N);

    printf("Enter the Rate of interest (R): ");
    scanf("%f", &R);

    I = (P * N * R) / 100;

    printf("Simple Interest (I) = %f\n", I);

    return 0;
}