#include <stdio.h>

int main(){
    int n, i = 0, j = 0, count = 0, result = 0;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n; i++){
        for(j = 0; j < n; j++){
            if(i != j){
                if(array[i] == array[j]) count++;
            }
        }

        if(count == 0) result++;

        count = 0;
    }

    printf("%d\n", result);

    return 0;
}