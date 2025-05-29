#include <stdio.h>

int main(){
    int N, K, i = 0, count = 0, serial = 0;

    scanf("%d", &N);
    scanf("%d", &K);
    
    int array[N], presentes[N];
    
    for(i = 0; i < N; i++){
        scanf("%d", &array[i]);

        if(array[i] <= 0){
            count++;
            presentes[serial] = (i + 1);
            //printf("\n\nCount: %d\n\nPresentes[%d]: %d\n\n", count, serial, presentes[i]);
            serial++;
        }
    }

    if(count >= K){
        printf("NAO\n");

        for(i = (count - 1); i >= 0; i--){
            printf("%d\n", presentes[i]);
        }
    }

    else printf("SIM\n");

    return 0;
}