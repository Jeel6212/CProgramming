#include <stdio.h>

int main(){
    float net_sales, gross_sales, discount;

    printf("Enter Gross sales:\n");
    scanf("%f", &gross_sales);

    
    if(gross_sales>20000){
        discount=gross_sales*0.15;
    }
    else if(gross_sales>10000){
        discount= gross_sales*0.10;
    }
    else{
    discount = gross_sales*0.05;
   }

   net_sales= gross_sales - discount;
   printf("Gross sales = %.2f\n", gross_sales);
   printf("Discount = %.2f\n", discount);
   printf("Net sales = %.2f\n", net_sales);
    return 0;
}