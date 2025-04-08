#include <stdio.h>

int main(){
    int conta;
    float cons, v;
    char type;

    scanf("%d", &conta);
    scanf("%f", &cons);
    scanf(" %c", &type);

    if(type == 'R'){
            v = (cons * 0.05) + 5;
    }

    else if(type == 'C'){
            if(cons > 80){
                v = 500 + ((cons - 80) * 0.25);
            }

            else v = 500;
    }

    else if(type == 'I'){
            if(cons > 100){
                v = 800 + ((cons - 100) * 0.04);
            }

            else v = 800;
    }

    printf("CONTA = %d\n", conta);
    printf("VALOR DA CONTA = %.2f\n", v);

    return 0;
}