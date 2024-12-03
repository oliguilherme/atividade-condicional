#include <stdio.h>
#include <stdlib.h>

int main() {
    float valor_compra;
    char forma_pagamento;

    printf("\nDigite o valor da compra: ");
    scanf("%f", &valor_compra);

    printf("\nA compra eh a vista? (S ou s -> Sim | N ou n -> Nao): ");
    scanf("%s", &forma_pagamento);

    if (valor_compra > 500.0 && (forma_pagamento == 'S' || forma_pagamento == 's')) {
        printf("\n\nTem direito a desconto.\n\n");
    } else {
        printf("\n\nNao tem direito a compra.\n\n");
    }

    system("pause");
    return 0;
}