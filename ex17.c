#include <stdio.h>

int main(){
    int n, u, d, c;

    scanf("%d", &n);

    u = n % 10;
    d = (n % 100) / 10;
    c = n / 100;

    printf("%d%d%d\n", u, d, c);
}