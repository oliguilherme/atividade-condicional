#include <stdio.h>
#include <stdlib.h>

int main()
{
    float n1, n2, n3, media_ponderada;

    printf("Digite as tr�s notas (separando-as por espa�o): ");
    scanf("%f%f%f", &n1, &n2, &n3);

    media_ponderada = (n1 + n2 + (n3 * 2)) / 4;

    if (media_ponderada >= 60) {
        printf("Aluno com a media %.2f esta aprovado!", media_ponderada);
    } else {
        printf("Aluno com a media %.2f esta reprovado!", media_ponderada);
    }

    system("pause");

    return 0;
}
