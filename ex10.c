#include <stdio.h>

int main(){
    float n1, dec;
    int n2;

    scanf("%f", &n1);

    n2 = n1;
    dec = (n1 - n2);

    printf("%.6f\n", dec);

    return 0;
}