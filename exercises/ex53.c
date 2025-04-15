#include <stdio.h>

int main(){
    int n, i, j, count = 0, number = 0, hcount = 0, hnumber;

    scanf("%d", &n);

    int array[n];

    for(i = 0; i < n; i++){
        scanf("%d", &array[i]);
    }

    for(i = 0; i < 101; i++){
        for(j = 0; j < n; j++){
            if(i == array[j]){
                count++;
                number = array[j];
            }
        }

        if(count > hcount){
            hcount = count;
            hnumber = number;
        }

        count = 0;
        number = 0;
    }

    printf("%d\n%d\n", hnumber, hcount);

    return 0;
}