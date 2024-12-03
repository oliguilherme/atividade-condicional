#include <stdio.h>
#include <stdlib.h>

int main() {
    int idade;
    float ingresso;

    printf("\n\nIdade: ");
    scanf("%d", &idade);
    printf("Valor do ingresso: R$");
    scanf("%f", &ingresso);

    if (idade > 60) {
        printf("\nValor a pagar (com desconto de 30%%): R$%.2f\n\n", ingresso * (0.7));
    } else {
        printf("\nValor a pagar (com desconto de 10%%): R$%.2f\n\n", ingresso * (0.1));
    }
    system("pause");
    return 0;
}