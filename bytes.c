#include <stdio.h>

int main(){

    float bytes, kb, mb, gb;

    printf("Enter the number of bytes: ");
    scanf("%f", &bytes);

    kb = bytes / 1024.0;
    mb = kb / 1024.0;
    gb = mb / 1024.0;

    printf("%f bytes = %.2f KB\n", bytes, kb);
    printf("%f bytes = %.2f MB\n", bytes, mb);
    printf("%f bytes = %.2f GB\n", bytes, gb);

    return 0;
}