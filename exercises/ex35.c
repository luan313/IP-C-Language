#include <stdio.h>

int main(){
    int mat, dep;
    float salmin, salfun, taximp, impb, impl, result;

    scanf("%d%f%d%f%f", &mat, &salmin, &dep, &salfun, &taximp);

    printf("MATRICULA = %d\n", mat);

    if(salfun > (salmin * 12)){
        impb = salfun * 0.2;
    }

    else if(salfun > (salmin * 5)){
        impb = salfun * 0.08;
    }

    else impb = 0;

    printf("IMPOSTO BRUTO = %.2f\n", impb);

    impl = impb - (300 * dep);

    printf("IMPOSTO LIQUIDO = %.2f\n", impl);

    result = impl - (salfun * (taximp / 100));

    printf("RESULTADO = %.2f\n", result);

    if(result > 0){
        printf("IMPOSTO A PAGAR\n");
    }

    else if(result == 0){
        printf("IMPOSTO QUITADO\n");
    }

    else printf("IMPOSTO A RECEBER\n");

    return 0;
}