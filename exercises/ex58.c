#include <stdio.h>

int main(){
    int T, i, j, b1 = 0, b2 = 0;
    int array[11];
    
    scanf("%d", &T);

    for(i = 0; i < T; i++){
        for(j = 0; j < 11; j++){
            scanf("%d", &array[j]);
        }

        //printf("\n\nANTES DE CALCULAR:\nB1: %d\nB2: %d\n\n", b1, b2);
        
        //CALCULANDO B1:
        
        for(j = 0; j < 9; j++){
            b1 += array[j] * (j + 1);
        }
        
        if((b1 % 11) == 10) b1 = 0;
        
        else b1 %= 11;
        
        //CALCULANDO B2:
        
        for(j = 0; j < 9; j++){
            b2 += array[j] * (9 - j);
        }
        
        if((b2 % 11) == 10) b2 = 0;
        
        else b2 %= 11;
        
        //CONDICIONAL:
        
        if(b1 == array[9] && b2 == array[10]) printf("CPF valido\n");
        
        else printf("CPF invalido\n");

        //printf("\n\nDEPOIS DE CALCULAR:\nB1: %d\nB2: %d\n\n", b1, b2);

        b1 = 0;
        b2 = 0;
    }

    return 0;
}