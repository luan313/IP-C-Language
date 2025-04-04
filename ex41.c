#include <stdio.h>

int main(){
    int size, i, search, number, j, check;

    scanf("%d", &size);

    int vet[size];

    for(i = 0; i < size; i++){
        scanf("%d", &vet[i]);
    }

    scanf("%d", &search);

    for(i = 0; i < search; i++){
        scanf("%d", &number);

        for(j = 0; j < size; j++){
            if(number == vet[j]){
                check = 1;
                break;
            }

            else{ 
                check = 0;
            }
        }
        
        if(check == 1) printf("ACHEI\n");

        else if(check == 0) printf("NAO ACHEI\n");
    }

    return 0;
}