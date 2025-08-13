#include <stdio.h> 

int main(){
    int a, b, c;
    printf("Enter two values:\n");
    scanf("%d %d", &a,&b);

    c=a+b;
    printf("%d+%d = %d\n", a,b,c);

    c=a*b;
    printf("%d*%d = %d\n", a,b,c);

    c=a-b;
    printf("%d - %d = %d\n", a,b,c);

    c=a/b;
    printf("%d/%d = %d\n", a,b,c);

    return 0;
}