#include <stdio.h>

int main(){
    /*float c = 30.0, f;

    f= ((9.0/5.0)*c) + 32;
    printf("The value of farenheit is %f", f);*/

    int c, f;

    printf("Enter c\n");
    scanf("%d", &c);

    printf("The value of celsius in farenheit is %f", ((9.0/5.0)*c + 32));
    return 0;
} 