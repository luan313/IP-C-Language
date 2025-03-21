#include <stdio.h>

int main(){
    int year;

    scanf("%d", &year);

    if(year % 4 == 0){
        if(year % 100 == 0){
            if(year % 400 == 0){
                printf("ANO BISSEXTO\n");
            }

            else printf("ANO NAO BISSEXTO\n");
        }

        else printf("ANO BISSEXTO\n");

    }

    else printf("ANO NAO BISSEXTO\n");

    return 0;
}