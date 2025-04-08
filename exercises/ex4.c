#include <stdio.h>

int main(){

    #define pi 3.14159
    float ac, at, al, alt, r, custo;

    scanf("%f %f", &r, &alt);

    ac = pi * (r * r);

    al = (2 * pi * r * alt);

    at = (2 * ac) + al;

    custo = at * 100;

    printf("O VALOR DO CUSTO E = %.2f\n", custo);

    return 0;
}