#include <stdio.h>

int main(){
    int n, i, count = 0, b;
    int bin[32];

    while(scanf("%d", &n) != EOF){
        b = n;
        do{
                b /= 2;
                count++;
        } while(b > 0);

        for(i = 0; i < count; i++){
            bin[i] = n % 2;
            n /= 2;
        }

        for(i = 1; i <= count; i++){
            printf("%d", bin[count - i]);
        }

        printf("\n");

        count = 0;
    }

    return 0;
}