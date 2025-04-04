#include <stdio.h>

int main(){
    int n, i, count = 0;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
        count += array[i];
    }

    printf("%d\n", count);

    return 0;
}