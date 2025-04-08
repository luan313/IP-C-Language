#include <stdio.h>

int main(){
    double m, a, t, v, s, w;

    scanf("%lf %lf %lf", &m, &a, &t);

    m *= 1000;

    v = a * t;

    printf("VELOCIDADE = %.2lf\n", (v * 3.6));

    s = (a * (t * t)) / 2;

    printf("ESPACO PERCORRIDO = %.2lf\n", s);

    w = (m * (v * v)) / 2;

    printf("TRABALHO REALIZADO = %.2lf\n", w);

    return 0;
}