#include <stdio.h>

int main(){
    int n, i, b = 0, u, count = 0, ind;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);

        if(array[i] > b){
            b = array[i];
        }
    }

    u = array[(n - 1)];

    for(i = 0; i < n; i++){
        if(array[i] == u){
            count++;
        }
    }

    for(i = 0; i < n; i++){
        if(b == array[i]){
            ind = i;
            break;
        }
    }

    printf("Nota %d, %d vezes\nNota %d, indice %d\n", u, count, b, ind);

    return 0;
}