#include <stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(i = 1; i <= n; i++){
        printf("%d", array[n - i]);

        if(i < n) printf(" ");
    }

    printf("\n");

    return 0;
}