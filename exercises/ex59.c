#include <stdio.h>
#include <math.h>

int main(){
    int N, i = 0, j = 0;
    double x, y, z, modt = 0;

    scanf("%d", &N);
    
    double coord[(3 * N)], mod[3];
    
    for(i = 0; i < (3 * N); i++){
        scanf("%lf", &coord[i]);
    }

    for(i = 0; i < ((3 * N) - 3); i += 3){
        //printf("\n\nValores:\ni: %d\n", i);
        x = coord[(3 + i)] - coord[i];
        //printf("\n\nValores:\nx = %.2lf - %.2lf: %.2lf\n", coord[(3 + i)], coord[i], x);
        y = coord[(4 + i)] - coord[(i + 1)];
        //printf("\n\nValores:\ny = %.2lf - %.2lf: %.2lf\n", coord[(4 + i)], coord[(i + 1)], y);
        z = coord[(5 + i)] - coord[(i + 2)];
        //printf("\n\nValores:\nz = %.2lf - %.2lf: %.2lf\n", coord[(5 + i)], coord[(i + 2)], z);

        mod[0] = fabs(x);
        mod[1] = fabs(y);
        mod[2] = fabs(z);

        modt = mod[0];

        for(j = 0; j < 3; j++){
            if(modt < mod[j]) modt = mod[j];
        }

        printf("%.2lf\n", modt);
    }

    return 0;
}