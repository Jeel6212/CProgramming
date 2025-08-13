#include <stdio.h>

int main(){

    float grossSales, netSales, discount;

    printf("Enter Gross sales:");
    scanf("%f", &grossSales);

    discount= 0.01*grossSales;
    netSales= grossSales - discount;

    printf("Net sales is = %f", netSales);
    return 0;

}