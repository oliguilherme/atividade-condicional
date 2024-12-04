#include <stdio.h>
#include <stdlib.h>

int main()
{
    char sexo;
    float altura, peso_ideal;

    printf("\n\nSexo (M ou mara Masculino || F ou f para Feminino): ");
    scanf("%c", &sexo);

    if (sexo == 'M' || sexo == 'm') {
        printf("Altura (em metros): ");
        scanf("%f", &altura);

        peso_ideal = (72.7 * altura) - 58.0;

        printf("\nSeu peso ideal eh: %.2f.\n\n", peso_ideal);

    } else if (sexo == 'F' || sexo == 'f') {
        printf("Altura (em metros): ");
        scanf("%f", &altura);

        peso_ideal = (62.1 * altura) - 44.7;

        printf("\nSeu peso ideal eh: %.2f.\n\n", peso_ideal);
    } else {
        printf("\nCaracter invalido.\n\n");
    }

    system("pause");
    return 0;
}
