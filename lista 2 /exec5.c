#include <stdio.h>

int main() {
    int numero;
    
    printf("digite um numero:");
    scanf("%d", &numero);
    
    if (numero >=0) {
        printf("\npositivo\n");
   
    } else if (numero <0 ) {
        printf("\nnegativo\n");
    }

    return 0;
}