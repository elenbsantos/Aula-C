#include <stdio.h>

int main() {
    int temDinheiro, emprestimo;

    printf("Voce tem dinheiro? (1 = SIM / 0 = NAO): ");
    scanf("%d", &temDinheiro);

    if (temDinheiro == 1) {
        printf("\nCompra\n");
    } else {
        printf("Consegue emprestimo? (1 = SIM / 0 = NAO): ");
        scanf("%d", &emprestimo);

        if (emprestimo == 1) {
            printf("\nCompra\n");
        } else {
            printf("\nNão compra\n");
        }
}
    return 0;
}
