#include<stdio.h>

int main(){
    int n, n100, n50, n10;

    scanf("%d", &n);

    n100 = n / 100;
    n -= (n100 * 100);

    n50 = n / 50;
    n -= (n50 * 50);

    n10 = n / 10;
    n -= (n10 * 10);

    printf("NOTAS DE 100 = %d\n", n100);
    printf("NOTAS DE 50 = %d\n", n50);
    printf("NOTAS DE 10 = %d\n", n10);
    printf("MOEDAS DE 1 = %d\n", n);
}