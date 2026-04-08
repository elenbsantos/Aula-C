#include <stdio.h>

int main() {
    // Se os clientes comprarem acima de 100 tem desconto
    
    int valor;
   printf ("Qual o valor da sua compra?: R$"  ); 

    scanf( "%d",&valor);
    
    if (valor >= 100){
    printf("\nParabéns! Você efetuou uma compra acima de R$100 e ganhou desconto! \n" );
    }
    // Se o valor for menor que 100
    else if (valor <100){
    printf ("\n Sem desconto pra você pobre :P \n" );
    }

    return 0;
}
