#include <stdio.h>

int main(){
    int size, i, ind = -1, b = -1;

    do{
        scanf("%d", &size);

        int array[size];

        if(size > 0){
            for(i = 0; i < size; i++){
                scanf("%d", &array[i]);
            }

            for(i = 0; i < size; i++){
                if(array[i] > b){
                    ind = i;
                    b = array[i];
                }
            }

            printf("%d %d\n", ind, b);

            ind = -1;
            b = -1;
        }

        else continue;
    } while(size > 0);

    return 0;
}