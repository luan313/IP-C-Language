#include <stdio.h>

int main(){
    int i, count = 0, b = 0, countb = 0;
    int array[4];

    for(i = 0; i < 4; i++){
        scanf("%d", &array[i]);

        if(array[i] > b){
            b = array[i];
        }
    }

    for(i = 0; i < 4; i++){
        if(array[i] != b){
            count += array[i];
        }
    }

    for(i = 0; i < 4; i++){
        if(array[i] == b){
            countb++;
        }
    }

    for(i = 1; i < countb; i++){
        count += b;
    }

    printf("%d\n", count);

    return 0;
}