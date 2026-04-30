#include <stdio.h>

int main() {
    
    int numero;
   printf ("Digita um numero:" ); 

    scanf( "%d",&numero);
    
    if (numero <= 10){
    printf("\ncategoria A :D \n" );
    }
    
    else if (numero <= 20){
    printf ("\ncategoria B :P \n" );
    }
    
    
    else if ( numero <= 30){
    printf ("categoria C ");
    }
    else
    return 0;
}