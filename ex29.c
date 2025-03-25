#include <stdio.h>

int main(){
    int n, d, c, u, m;

    scanf("%d", &n);

    if(n <= 0 || n > 9999){
        printf("Numero invalido!");

        return 0;
    }

    else {
        u = n % 10;
        d = (n % 100) / 10;
        c = (n % 1000) / 100;
        m = n / 1000;
        
        if(n < 10){
            printf("(primeira ordem)");

            u = n % 10;
            d = -1;
            c = -1;
            m = -1;
        }

        else if(n < 100){
            printf("(segunda ordem)");

            u = n % 10;
            d = (n % 100) / 10;
            c = -1;
            m = -1;
        }

        else if(n < 1000){
            printf("(terceira ordem)");

            u = n % 10;
            d = (n % 100) / 10;
            c = (n % 1000) / 100;
            m = -1;
        }

        else if(n  < 10000){
            printf("(quarta ordem)");

            u = n % 10;
            d = (n % 100) / 10;
            c = (n % 1000) / 100;
            m = n / 1000;
        }

        printf(" %d = ", n);

        if (m > 1){
            printf("%d unidades de milhar", m);
        }

        else if(m == 1){
            printf("%d unidade de milhar", m);
        }

        if (c != 0 && c != -1 && m != 0 && m != -1){
            printf(" + ");
        }

        if (c > 1){
            printf("%d centenas", c);
        }

        else if(c == 1){
            printf("%d centena", c);
        }

        if (d != 0 && d != -1 && c != -1){
            printf(" + ");
        }

        if (d > 1){
            printf("%d dezenas", d);
        }

        else if(d == 1){
            printf("%d dezena", d);
        }

        if(u != 0 && u != -1 && d != -1){
            printf(" + ");
        }

        if (u > 1){
            printf("%d unidades", u);
        }

        else if(u == 1){
            printf("%d unidade", u);
        }


        printf(" = ");

        if(m >= 1){
            if (c == 0 && d == 0 && u == 0){
                printf("%d\n", (m * 1000));
            }
            else printf("%d", (m * 1000));
        }

        if (c != 0 && c != -1 && m != 0 && m != -1){
            printf(" + ");
        }

        if(c >= 1){
            if (d == 0 && u == 0){
                printf("%d\n", (c * 100));
            }

            else printf("%d", (c * 100));
        }

        if (d != 0 && d != -1 && c != -1){
            printf(" + ");
        }

        if(d >= 1){
            if (u == 0){
                printf("%d\n", (d * 10));
            }

            else printf("%d", (d * 10));
        }

        if(u != 0 && u != -1 && d != -1){
            printf(" + ");
        }

        if(u >= 1){
            printf("%d\n", u);
        }
    }

    return 0;
}