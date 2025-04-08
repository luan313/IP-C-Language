#include <stdio.h>

int main(){
    int n, d1, d2, d3, d4, d5;

    scanf("%d", &n);

    if(n < 10){
        printf("PALINDROMO\n");
    }

    else if(n < 100){
        d1 = n / 10;
        d2 = n % 10;

        if(d1 == d2){
            printf("PALINDROMO\n");
        }

        else printf("NAO PALINDROMO\n");
    }

    else if(n < 1000){
        d1 = n / 100;
        d3 = (n % 100) % 10;

        if(d1 == d3){
            printf("PALINDROMO\n");
        }

        else printf("NAO PALINDROMO\n");
    }

    else if(n < 10000){
        d1 = n / 1000;
        d2 = (n % 1000) / 100;
        d3 = (n % 100) / 10;
        d4 = n % 10;
        
        if(d1 == d4 && d2 == d3){
            printf("PALINDROMO\n");
        }

        else printf("NAO PALINDROMO\n");
    }

    else if(n < 100000){
        d1 = n / 10000;
        d2 = (n % 10000) / 1000;
        d3 = (n % 1000) / 100;
        d4 = (n % 100) / 10;
        d5 = n % 10;

        if(d1 == d5 && d2 == d4){
            printf("PALINDROMO\n");
        }

        else printf("NAO PALINDROMO\n");
    }

    else if(n >= 100000){
        printf("NUMERO INVALIDO\n");
    }

    return 0;
}