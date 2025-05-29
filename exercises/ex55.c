#include <stdio.h>

int main(){
    int T, N, i = 0, j = 0, h = 0, count, range = 0, wrange = 0;

    scanf("%d", &T);

    int array[1000];

    for(i = 0; i < T; i++){
        scanf("%d", &N);

        count = N * N;

        for(j = 0; j < N; j++){
            scanf("%d", &array[j]);
        }

        if(array[0] > array[1]){
            wrange = array[0] - array[1];
        }

        else wrange = array[1] - array[0];

        for(j = 0; j < N; j++){
            for(h = (j + 1); h < N; h++){
                if(array[j] > array[h]){
                    range = array[j] - array[0];
                }

                else range = array[h] - array[j];

                if(range < wrange) wrange = range;
            }
        }

        printf("%d %d\n", wrange, count);
    }

    return 0;
}