#include <stdio.h>

int main(){
    int n, i, count = 0;

    do{
        scanf("%d", &n);

        if(n >= 0){
            for(i = 1; i <= n; i++){
                if((n % i) == 0) count++;
            }

            if(count == 2){
                printf("PRIMO\n");
            }

            else{
                printf("NAO PRIMO\n");
            }
        }
        else continue;
        
        count = 0;
    }while (n >= 0);

    return 0;
}