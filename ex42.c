#include <stdio.h>

int main(){
    int n, count, number, i;

    do{
        scanf("%d", &n);
    }while(n < 1 || n > 1000);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    scanf("%d", &number);

    for(i = 0; i < n; i++){
        if(array[i] >= number) count++;
    }

    printf("%d\n", count);

    return 0;
}