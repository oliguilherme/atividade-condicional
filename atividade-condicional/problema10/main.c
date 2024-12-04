#include <stdio.h>
#include <stdlib.h>

int main() {
    float salario, valor_prestacao;

    printf("\n\nSalario: R$");
    scanf("%f", &salario);
    printf("Valor da prestacao: R$");
    scanf("%f", &valor_prestacao);

    if (valor_prestacao > salario * 1.20) {
        printf("\nEmprestimo nao concedido.\n\n");
    } else {
        printf("\nEmprestimo concedido.\n\n");
    }

    return 0;

}