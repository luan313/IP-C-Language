#include <stdio.h>

int main(){
    float cf, pd, pi, price;

    scanf("%f%f%f", &cf, &pd, &pi);

    price = cf + ((pd * cf) / 100) + ((pi * cf) / 100);

    printf("O VALOR DO CARRO E = %.2f\n", price);

    return 0;
}