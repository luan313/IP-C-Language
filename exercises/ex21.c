#include <stdio.h>

int main(){
    int n1, n2, n3, q;

    scanf("%d%d%d", &n1, &n2, &n3);

    if(n1 >= 0 && n1 <= 9 && n2 >= 0 && n2 <= 9 && n3 >= 0 && n3 <= 9){
        q = ((n1 * 100) + (n2 * 10) + n3); 

        printf("%d, %d\n", q, (q * q));
    }

    else printf("DIGITO INVALIDO\n");

    return 0;
}