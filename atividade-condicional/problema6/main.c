#include <stdio.h>
#include <stdlib.h>

int main() {
    float velocidade;

    printf("\n\nDigite a velocidade em km/h: ");
    scanf("%f", &velocidade);

    if (velocidade > 80.0) {
        float excesso = velocidade - 80;
        float multa = 5 * excesso;
        printf("\nValor da multa (R$5.00 * %.2fkm/h): R$%.2f\n", excesso, multa);    
    } else {
        printf("Dentro do limite de velocidade");
    }

    system("pause");
    return 0;
}