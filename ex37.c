#include <stdio.h>

int main(){
    int n1, n2, n3, s, m, b;
    char x, y, z;

    scanf("%d %d %d", &n1, &n2, &n3);
    scanf(" %c %c %c", &x, &y, &z);

    if(n1 <= n2 && n2 <= n3){
        s = n1;
        m = n2;
        b = n3;
    }

    else if(n1 <= n3 && n3 <= n2){
        s = n1;
        m = n3;
        b = n2;
    }

    else if(n2 <= n1 && n1 <= n3){
        s = n2;
        m = n1;
        b = n3;
    }

    else if(n2 <= n3 && n3 <= n1){
        s = n2;
        m = n3;
        b = n1;
    }

    else if(n3 <= n1 && n1 <= n2){
        s = n3;
        m = n1;
        b = n2;
    }

    else if(n3 <= n2 && n2 <= n1){
        s = n3;
        m = n2;
        b = n1;
    }

    if(x == 'A' && y == 'B' && z == 'C'){
        printf("%d %d %d\n", s, m, b);
    }

    else if(x == 'A' && y == 'C' && z == 'B'){
        printf("%d %d %d\n", s, b, m);
    }

    else if(x == 'B' && y == 'A' && z == 'C'){
        printf("%d %d %d\n", m, s, b);
    }

    else if(x == 'B' && y == 'C' && z == 'A'){
        printf("%d %d %d\n", m, b, s);
    }

    else if(x == 'C' && y == 'A' && z == 'B'){
        printf("%d %d %d\n", b, s, m);
    }

    else if(x == 'C' && y == 'B' && z == 'A'){
        printf("%d %d %d\n", b, m, s);
    }

    return 0;
}