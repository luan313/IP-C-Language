#include <stdio.h>

int main(){
    int n;

    scanf("%d", &n);

    if(n <= 0 || n > 9999){
        printf("Numero invalido!");

        return 0;
    }

    else if(n < 10){
        printf("(primeira ordem) %d = %d unidades = %d\n", n, n, n);
    }

    else if(n < 100){
        printf("(segunda ordem) %d = %d dezenas + %d unidades = %d + %d\n", );

    }
}