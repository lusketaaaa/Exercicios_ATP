#include <stdio.h>
#include <math.h>

int main() {
    int entrada;
    printf("Opcoes: Soma[1] RaizQuadrada[2] Finalizar[3]: ");
    scanf("%d", &entrada);  

    if (entrada == 1) {
        float num1, num2, soma;
        printf("Digite o primeiro numero: ");
        scanf("%f", &num1);
        printf("Digite o segundo numero: ");
        scanf("%f", &num2);
        soma = num1 + num2;
        printf("Soma: %.2f\n", soma);
    } 
    else if (entrada == 2) {
        int raiz;
        printf("Digite o numero que deseja obter a raiz quadrada: ");
        scanf("%d", &raiz);
        double resultado = sqrt((double)raiz);
        printf("Raiz quadrada: %.2f\n", resultado);
    } 
    else {
        printf("Programa Finalizado\n");
    }

    return 0;
}
