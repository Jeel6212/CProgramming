#include <stdio.h>

int main(){
    int a;

    printf("Enter value:");
    scanf("%d",&a);

    if(a%7==0){
        printf("The number %d is divisible by 7", a);
    }
    else{
        printf("Number is not divisible by 7");
    }

    return 0;

}
