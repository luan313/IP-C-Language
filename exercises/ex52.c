#include <stdio.h>

int main(){
    int n, j, i;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 1001; i++){
        for(j = 0; j < n; j++){
            if(i == array[j]){
                printf("%d\n", array[j]);
            }
        }
    }

    return 0;
}