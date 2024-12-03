#include <stdio.h>
#include <stdlib.h>

int main() {
    float n1, n2, media;

    printf("\n\nInforme a nota 1 e a nota 2 (separadas por espaço): ");
    scanf("%f%f", &n1, &n2);

    media = (n1 + n2) / 2;

    if (media >= 7) {
        printf("\nAprovado!\n\n");
    } else {
        float n3;
        printf("\nInforme a nota 3: ");
        scanf("%f", &n3);

        media = (n1 + n2 + n3) / 3;

        if (media >= 5) {
            printf("\nAprovado com recuperacao.\n\n");
        } else {
            printf("\nReprovado!\n\n");
        }
    }

    system("pause");
    return 0;
}