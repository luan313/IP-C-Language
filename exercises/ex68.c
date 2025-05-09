#include <stdio.h>
#include <string.h>

int main(){
    int i, n, j;
    char str[50];

    scanf("%d", &n);

    getchar();
    memset(str, 0, sizeof(str));
    
    for(i = 0; i < n; i++){
        fgets(str, sizeof(str), stdin);
        //fgets(str2, sizeof(str2), stdin);
        
        str[strcspn(str,"\n")] = '\0';
        
        for(j = 0; j < 49; j++){
            if(str[j] != '\0') printf("%c", str[j]);
        }

        printf("\n");
    }

    return 0;
}