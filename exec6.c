#include <stdio.h>

int main() {
    float nota, frequencia;
    
    printf("digite a nota:"); 
    scanf("%f",&nota);
    
    printf("\ndigite a frequencia (em %%):");
    scanf("%f",&frequencia);
    
    if (nota >= 7 && frequencia >= 75) {
        printf("\nAprovado\n");
   
    } else {
        printf("\nreprovado\n"); 
    }
    
    
    return 0;
}
