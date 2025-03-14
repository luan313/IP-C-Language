#include <stdio.h>

int main(){
    int h, m, s, st;

    scanf("%d %d %d", &h, &m, &s);

    h = h * 3600;
    m = m * 60;

    st = h + m + s;

    printf("O TEMPO EM SEGUNDOS E = %d\n", st);

    return 0;
}