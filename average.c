#include <stdio.h>

int main(){

    int average, s1, s2, s3, total;

    printf("Enter the marks of s1, s2 and s3 out of 100 in each subject:");
    scanf("%d\n%d\n%d", &s1, &s2, &s3);

    total = s1+s2+s3;
    average=total/3;

    printf("Average of 3 subjects = %d", average);

    return 0;
}