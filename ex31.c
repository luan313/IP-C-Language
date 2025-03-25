#include <stdio.h>
#include <math.h>

int main(){
    float a, b, c, delta, xs, xb, x1, x2;

    scanf("%f %f %f", &a, &b, &c);

    delta  = ((b * b) -4 * a * c);

    if(((b * b) -4 * a * c) > 0){
        printf("RAIZES DISTINTAS\n");
    }

    else if(((b * b) -4 * a * c) == 0){
        printf("RAIZ UNICA\n");

        x1 = (- b + sqrt(delta)) / (2 * a);
        xs = x1;
        printf("X1 = %.2f\n", xs);

        return 0;
    }

    else if(((b * b) -4 * a * c) < 0){
        printf("RAIZES IMAGINARIAS\n");
        
        return 0;
    }

    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);

    if(x1 <= x2){
        xs = x1;
        xb = x2;
        printf("X1 = %.2f\n", xs);
        printf("X2 = %.2f\n", xb);
    }

    else {
        xs = x2;
        xb = x1;
        printf("X1 = %.2f\n", xs);
        printf("X2 = %.2f\n", xb);
    }

    return 0;
}