#include <stdio.h>

int main(){
    int size, i, count = 0;

    scanf("%d", &size);

    int array[size];

    if(size > 1 && size <= 1000){
        for(i = 0; i < size; i++){
            scanf("%d", &array[i]);
        }

            for(i = 0; i < size; i++){
                if(((array[i]) % 2) == 0) {
                    printf("%d ", array[i]);
                    count++;
                 }
             }

            printf("%d\n", count);
            
    }

    return 0;
}