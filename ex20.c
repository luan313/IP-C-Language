#include <stdio.h>

int main(){
    float n1, n2, n3, m;

    scanf("%f%f%f", &n1, &n2, &n3);

    m = (n1 + n2 + n3) / 3;

    printf("MEDIA = %.2f\n", m);

    if (m >= 6){
        printf("APROVADO\n");
    }

    else printf("REPROVADO\n");

    return 0;
}