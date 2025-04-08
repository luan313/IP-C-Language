#include <stdio.h>

int main(){
    int n, pa, sa, ta;

    scanf("%d", &n);

    pa = n / 100;
    sa = (n % 100) / 10;
    ta = n % 10;
    n *= 10;

    n += (pa + (sa * 3) + (ta * 5)) % 7;

    printf("O NOVO NUMERO E = %d\n", n);

    return 0;
}