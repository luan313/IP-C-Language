#include <stdio.h>

int main(){
    int n1, n2, n3, n4, r;

    scanf("%d %d %d %d", &n1, &n2, &n3, &n4);

    if(n1 >= n2 && n1 >= n3 && n1 >= n4){
        r = (n2 + n3 + n4);
        printf("%d\n", r);
    }

    else if(n2 >= n1 && n2 >= n3 && n2 >= n4){
        r = (n1 + n3 + n4);
        printf("%d\n", r);
    }

    else if(n3 >= n1 && n3 >= n2 && n3 >= n4){
        r = (n1 + n2 + n4);
        printf("%d\n", r);
    }

    else if(n4 >= n1 && n4 >= n2 && n4 >= n3){
        r = (n1 + n2 + n3);
        printf("%d\n", r);
    }

    return 0;
}