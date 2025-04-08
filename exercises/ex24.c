#include <stdio.h>

int main(){
    int h, h3, h1;
    float hf;

    scanf("%d", &h);

    h3 = h / 3;
    h1 = h % 3;
    hf = ((h3 * 10) + (h1 * 5));

    printf("O VALOR A PAGAR E = %.2f\n", hf);

    return 0;
}