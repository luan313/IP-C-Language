#include <stdio.h>

int main(){
    int date, d1, d2, m1, m2, y1, y2, y3, y4;

    scanf("%d", &date);

    if(date > 99999999){
        printf("Data invalida!\n");

        return 0;
    }

    d1 = date / 10000000;
    d2 = (date % 10000000) / 1000000;

    m1 = (date % 1000000) / 100000;
    m2 = (date % 100000) / 10000;

    y1 = (date % 10000) / 1000;
    y2 = (date % 1000) / 100;
    y3 = (date % 100) / 10;
    y4 = date % 10;

    if(((d1 * 10) + d2) >= 1 && ((d1 * 10) + d2) <= 30 && ((m1 * 10) + m2) >= 1 && ((m1 * 10) + m2) <= 12 && ((y1 * 1000) + (y2 * 100) + (y3 * 10) + y4) > 1){
        if(((m1 * 10) + m2) == 2 && ((d1 * 10) + d2) > 28){
            printf("Data invalida!\n");

            return 0;
        }

        else {
            printf("%d%d de ", d1, d2);

            if(((m1 * 10) + m2) == 1){
                printf("janeiro");
            }

            else if(((m1 * 10) + m2) == 2){
                printf("fevereiro");
            }

            else if(((m1 * 10) + m2) == 3){
                printf("março");
            }

            else if(((m1 * 10) + m2) == 4){
                printf("abril");
            }

            else if(((m1 * 10) + m2) == 5){
                printf("maio");
            }

            else if(((m1 * 10) + m2) == 6){
                printf("junho");
            }

            else if(((m1 * 10) + m2) == 7){
                printf("julho");
            }

            else if(((m1 * 10) + m2) == 8){
                printf("agosto");
            }

            else if(((m1 * 10) + m2) == 9){
                printf("setembro");
            }

            else if(((m1 * 10) + m2) == 10){
                printf("outubro");
            }

            else if(((m1 * 10) + m2) == 11){
                printf("novembro");
            }

            else if(((m1 * 10) + m2) == 12){
                printf("dezembro");
            }

            printf(" de %d%d%d%d\n", y1, y2, y3, y4);
        }
    }

    else {
        printf("Data invalida!\n");

            return 0;
    }

    /*printf("%d%d / %d%d / %d%d%d%d\n", d1, d2, m1, m2, y1, y2, y3, y4);*/

    return 0;
}