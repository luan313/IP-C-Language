#include <stdio.h>

int main(){
    double sal;
    int p, t, e, cot1 = 0, cot2 = 0, cot3 = 0, cot4 = 0, cot0 = 0;

    do{
        scanf("%lf%d%d%d", &sal, &p, &t, &e);

        if(t == 2){
            if((sal / p) <= 937.00){
                if(e == 1 || e == 2 || e == 3){
                    printf("ALUNO COTISTA (L2)\n");
                    cot2++;
                }

                else{
                    printf("ALUNO COTISTA (L1)\n");
                    cot1++;
                }
            }

            else if(e == 1 || e == 2 || e == 3){
                printf("ALUNO COTISTA (L4)\n");
                cot4++;
            }

            else{
                printf("ALUINO COTISTA (L3)\n");
                cot3++;
            }
        }

        else if(sal != -1 || p != -1 || t != -1 || e != -1){
            printf("ALUNO NAO COTISTA\n");
            cot0++;
        }

        else continue;
        
    }while(sal != -1 || p != -1 || t != -1 || e != -1);

    printf("TOTAL (L1): %d\n", cot1);
    printf("TOTAL (L2): %d\n", cot2);
    printf("TOTAL (L3): %d\n", cot3);
    printf("TOTAL (L4): %d\n", cot4);
    printf("TOTAL NAO COTISTA: %d\n", cot0);

    return 0;
}