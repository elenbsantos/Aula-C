#include <stdio.h>

int main() {
    // Se a idade >= 18 pode entrar
    
    int idade;
   printf ("Digite a idade:"); 

    scanf( "%d",&idade);
    
    if (idade >= 18){
    printf("\nPode entrar\n" );
    }
    // Se a idade <= 16 pode entrar com responsável
    else if (idade >=16){
    printf ("\n Pode entrar com responsável \n" );
    }
    //Se a idade for <16 não entra
    else {
    printf ("\n Cai fora!! \n");
    }
 
    return 0;
}