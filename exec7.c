#include <stdio.h>

int main() {
    int idade;
    
    printf("digite sua idade:");
    scanf("%d", &idade);
    
     if (idade >= 60) {
        printf("\nIdoso\n");
    
    } else if(idade >= 18) {
    printf("\nAdulto\n");
    
    } else{
    printf("\nMenor\n");
    
    }
    return 0;
}
