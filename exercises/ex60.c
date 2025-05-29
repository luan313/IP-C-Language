#include <stdio.h>

void ordenaArray(int array[], int size){
    int i = 0, j = 0, temp;

    for(i = 0; i < size; i++){
        for(j = 0; j < (size - i - 1); j++){
            if(array[j] > array[j + 1]){
                temp = array[j];
                array[j] = array[j + 1];
                array[j + 1] = temp;
            }
        }
    }
}

int main(){
    int N, i = 0, countp = 0, counti = 0;

    scanf("%d", &N);
    
    int array[N];
    int par[N];
    int impar[N];
    
    for(i = 0; i < N; i++){
        scanf("%d", &array[i]);

        if((array[i] % 2) == 0){
            par[countp] = array[i];
            countp++;
        }
        else{
            impar[counti] = array[i];
            counti++;
        }
    }

    ordenaArray(par, countp);
    ordenaArray(impar, counti);

    for(i = 0; i < countp; i++){
        printf("%d\n", par[i]);
    }
    
    for(i = 0; i < counti; i++){
        printf("%d\n", impar[((counti - 1) - i)]);
    }

    return 0;
}