#include <stdio.h>

int main() {
   float temperatura;
   
    printf("Digite a temperatura:");
    scanf("%f", &temperatura);
    
    if (temperatura >= 30) {
        printf("\nUse camiseta\n");
   
    }else if (temperatura < 30) {
        printf("\nNão use camiseta\n");
    }
        
      return 0;
}