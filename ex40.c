#include <stdio.h>

int main(){
    int i;
    float n1, n2, n3;

    scanf("%d %f %f %f", &i, &n1, &n2, &n3);

    if(i == 1){
        if(n1 <= n2 && n2 <= n3){
            printf("%.2f %.2f %.2f\n", n1, n2, n3);
        }
    
        else if(n1 <= n3 && n3 <= n2){
            printf("%.2f %.2f %.2f\n", n1, n3, n2);
        }
    
        else if(n2 <= n1 && n1 <= n3){
            printf("%.2f %.2f %.2f\n", n2, n1, n3);
        }
    
        else if(n2 <= n3 && n3 <= n1){
            printf("%.2f %.2f %.2f\n", n2, n3, n1);
        }
    
        else if(n3 <= n1 && n1 <= n2){
            printf("%.2f %.2f %.2f\n", n3, n1, n2);
        }
    
        else if(n3 <= n2 && n2 <= n1){
            printf("%.2f %.2f %.2f\n", n3, n2, n1);
        }
    }

    if(i == 2){
        if(n1 >= n2 && n2 >= n3){
            printf("%.2f %.2f %.2f\n", n1, n2, n3);
        }
    
        else if(n1 >= n3 && n3 >= n2){
            printf("%.2f %.2f %.2f\n", n1, n3, n2);
        }
    
        else if(n2 >= n1 && n1 >= n3){
            printf("%.2f %.2f %.2f\n", n2, n1, n3);
        }
    
        else if(n2 >= n3 && n3 >= n1){
            printf("%.2f %.2f %.2f\n", n2, n3, n1);
        }
    
        else if(n3 >= n1 && n1 >= n2){
            printf("%.2f %.2f %.2f\n", n3, n1, n2);
        }
    
        else if(n3 >= n2 && n2 >= n1){
            printf("%.2f %.2f %.2f\n", n3, n2, n1);
        }
    }

    else if(i == 3){
        if(n1 <= n2 && n2 <= n3){
            printf("%.2f %.2f %.2f\n", n2, n3, n1);
        }
    
        else if(n1 <= n3 && n3 <= n2){
            printf("%.2f %.2f %.2f\n", n3, n2, n1);
        }
    
        else if(n2 <= n1 && n1 <= n3){
            printf("%.2f %.2f %.2f\n", n1, n3, n2);
        }
    
        else if(n2 <= n3 && n3 <= n1){
            printf("%.2f %.2f %.2f\n", n3, n1, n2);
        }
    
        else if(n3 <= n1 && n1 <= n2){
            printf("%.2f %.2f %.2f\n", n1, n2, n3);
        }
    
        else if(n3 <= n2 && n2 <= n1){
            printf("%.2f %.2f %.2f\n", n2, n1, n3);
        }
    }

    return 0;
}