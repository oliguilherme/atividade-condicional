#include <stdio.h>
#include <stdlib.h>

int main() {
    float peso, altura, imc;

    printf("Informe seu peso (em Kg): ");
    scanf("%f", &peso);
    printf("Informe sua altura (em metros): ");
    scanf("%f", &altura);

    imc = peso / (altura * altura);

    if (imc >= 18.5 && imc <= 24.9) {
        printf("\nPeso normal.\n");
    } else {
        printf("\nFora do peso.\n");
    }

    system("pause");
    return 0;
}