#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    printf("%d\n", ((32 * n) + (64 * n) - n));

    return 0;
}