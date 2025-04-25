#include <stdio.h>

int main(){
    int i, n, j, temp;
    float med; 
    
    scanf("%d", &n);

    long int array[n];

    for(i = 0; i < n; i++){
        scanf("%ld", &array[i]);

    }

    for(i = 0; i < (n - 1); i++){
        for(j = 0; j < (n - 1); j++){
            if(array[j] > array[(j + 1)]){
                temp = array[j];
                array[j] = array[(j + 1)];
                array[(j + 1)] = temp;
                temp = 0;
            }
        }
    }

    if((n % 2) == 0){
        med = (array[(n / 2)] + array[((n / 2) - 1)]) / 2.00;
    }

    else med = array[(n / 2)];

    printf("%.2f\n", med);

    return 0;
}