#include <stdio.h>

int main(){
    int N;
    float bat;

    scanf("%d", &N);

    bat = (((N * 365.25) * 24) * 3600);

    printf("O CORACAO BATEU %.2f VEZES\n", bat);

    return 0;
}