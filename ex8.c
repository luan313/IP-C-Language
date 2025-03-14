#include <stdio.h>
#include <math.h>

int main(){
    float h, a, ab, v, j;

    scanf("%f %f", &a, &h);

    ab = ((3 * a) * (sqrt(3))) / 2;

    j = (1 / 3);

    printf("%.2f", j);

    v = ab * h;

    printf("O VOLUME DA PIRAMIDE E = %.2f METROS CUBICOS\n", v); 

    return 0;
}