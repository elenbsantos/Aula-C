#include <stdio.h>

int main() {
    
    int nota;
   printf ("Digita sua nota:" ); 

    scanf( "%d",&nota);
    
    if (nota <= 5){
    printf("\nParabéns! Você vai repetir de ano :D \n" );
    }
    // Se o valor for menor que 100
    else if (nota >= 7){
    printf ("\n Parabéns! você passou :P \n" );
    }
    return 0;
}