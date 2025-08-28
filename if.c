#include <stdio.h>

int main(){
    int a,b;
    printf("Enter two values:\n");
    scanf("%d %d", &a, &b);

    if(a>b){
        printf("Value of a is largest");

    }
    else{
        printf("value of a is smallest");
    }
    return 0;
}

