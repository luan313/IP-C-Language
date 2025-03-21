#include <stdio.h>

int main(){
    float sal;

    scanf("%f", &sal);

    if(sal <= 300){
        sal = sal + (sal * 0.5);
    }

    else if(sal > 300){
        sal = sal + (sal * 0.3);
    }

    printf("SALARIO COM REAJUSTE = %.2f\n", sal);

    return 0;
}