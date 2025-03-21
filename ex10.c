#include <stdio.h>

int main() {
    double n, round;
    int res;

    scanf("%lf", &n);

    res = n*10+0.5;
    round = res/10.0;

    printf("%.6lf\n", round);

    res = n*100+0.5;
    round = res/100.0;

    printf("%.6lf\n", round);

    res = n*1000 +0.5;
    round = res/1000.0;

    printf("%.6lf\n", round);
    
    return 0;
}