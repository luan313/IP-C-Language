#include <stdio.h>
#include <math.h>

int main(){
    int n, i;

    scanf("%d", &n);

    double array[(n * 3)], result[(n - 1)];

    for(i = 0; i < (n * 3); i++){
        scanf("%lf", &array[i]);
    }

    for(i = 0; i < ((n - 1)* 3); i += 3){
        result[i] = sqrt(((array[i] - array[(i + 3)]) * (array[i] - array[(i + 3)])) +
        ((array[(i + 1)] - array[(i + 4)]) * (array[(i + 1)] - array[(i + 4)])) +
        ((array[(i + 2)] - array[(i + 5)]) * (array[(i + 2)] - array[(i + 5)])));

        printf("%.2lf\n", result[i]);
    }

    return 0;
}