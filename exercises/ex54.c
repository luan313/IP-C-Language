#include <stdio.h>

int main(){
    long int n, j, i, h = 0, b = 0;
    double sum = 0;

    scanf("%ld", &n);

    int array[n], array2[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);

        if(array[i] > b) b = array[i];
    }

    for(i = 0; i < b; i++){
        for(j = 0; j < n; j++){
            if(i == array[j]){
                array2[h] = array[j];
                h++;
            }
        }
    }

    if((n % 2) == 0){
        for(i = ((n / 2) - 1); i <= (n / 2); i++){
            sum += array2[i];
        }

        sum /= 2;

        printf("%.2lf\n", sum);

        return 0;
    }

    else if((n % 2) != 0){
        printf("%d\n", array2[(n / 2)]);

        return 0;
    }
}