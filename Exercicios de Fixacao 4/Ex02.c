#include <stdio.h>
int main() {
    int nota, peso, somanotas = 0, somapesos = 0;
    float media;
    printf("Digite a nota:\n");
    scanf("%d", &nota);
    while (nota != 0)
    {
        printf("Digite o peso:\n");
        scanf("%d", &peso);

        somanotas += nota * peso;
        somapesos += peso;

        printf("Digite a nota:\n");
        scanf("%d", &nota);
    }

    media = (float)somanotas / somapesos;
    printf("Media = %.2f\n", media);
    
    return 0;
}