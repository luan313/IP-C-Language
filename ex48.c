#include <stdio.h>

int main(){
    int size, i, b = 0, count = 0, j;

    do{
        scanf("%d", &size);

        int array[size];

        if(size > 0){
            for(i = 0; i < size; i++){
                scanf("%d", &array[i]);

                if(array[i] > b){
                    b = array[i];
                }
            }

            for(i = 0; i <= b; i++){
                for(j = 0; j < size; j++){
                    if(array[j] <= i){
                        count++;
                    }
                }

                printf("(%d) %d\n", i, count);
                count = 0;
            }

            b = 0;
        }

        else continue;
    } while(size > 0);

    return 0;
}