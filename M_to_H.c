#include <stdio.h>

int main(){

    int minutes, hours, remaining_minutes;
    printf("Enter time into minutes:");
    scanf("%d", &minutes);

    hours= minutes/60;
    remaining_minutes= minutes%60;

    printf("%d minute is equal to %d hours %d minutes", minutes, hours, remaining_minutes);
    return 0;


}