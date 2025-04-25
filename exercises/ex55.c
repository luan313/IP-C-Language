#include <stdio.h>

int main(){
    int n, i, j, rep, h, count, d = 2000;

    scanf("%d", &rep);

    int array[1000];

    for(i = 0; i < rep; i++){
        scanf("%d", &n);

        for(j = 0; j < n; j++){
            scanf("%d", &array[j]);
        }

        for(j = 0; j < n; j++){
            for(h = 0; h < (n - 1); h++){
                if((array[h] - array[(h + 1)]) < d){
                    d = (array[h] - array[(h + 1)]);
                }

                count++;
            }
        }

        printf("%d %d\n", count, d);

        count = 0, d = 2000;
    }

    return 0;
}