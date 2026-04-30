#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade:");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("\nMaior\n");
        
    } else {
        printf("\nMenor\n"); 
        
    }
     return 0;
}