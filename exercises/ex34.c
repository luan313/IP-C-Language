#include <stdio.h>

int main(){
    int c, d, r;

    scanf("%d %d %d", &c, &d, &r);

    if(c < 7 && d > 50 && r > 80000){
        printf("ACO DE GRAU = 10\n");
    }

    else if(c < 7 && d > 50){
        printf("ACO DE GRAU = 9\n");
    }

    else if(c < 7){
        printf("ACO DE GRAU = 8\n");
    }

    else printf("ACO DE GRAU = 7\n");
    
    return 0;
}