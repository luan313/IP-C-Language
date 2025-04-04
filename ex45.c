#include <stdio.h>

int main(){
    int n, i;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < n; i++){
        printf("%d", array[i]);
    
        if(i < (n - 1)) printf(" ");
    }

    printf("\n");

    return 0;
}