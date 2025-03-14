#include <stdio.h>

int main(){
    
    float consumo, custokw, valconsumo, salmin;

    scanf("%f %f", &salmin, &consumo);

    custokw = salmin * 0.007;

    valconsumo = consumo * custokw;

    printf("Custo por kW: R$ %.2f\n", custokw);
    printf("Custo do consumo: R$ %.2f\n", valconsumo);
    printf("Custo com desconto: R$ %.2f\n", (valconsumo * 0.9));

    return 0;
}