#include <stdio.h>

int main(){
    float Fahrenheit, Pol, C, Mil;

    scanf("%f %f", &Fahrenheit, &Pol);

    C = (5 * (Fahrenheit - 32))/9;

    Mil = Pol * 25.4;

    printf("O VALOR EM CELSIUS = %.2f\n", C);
    printf("A QUANTIDADE DE CHUVA E = %.2f\n", Mil);

    return 0;
}