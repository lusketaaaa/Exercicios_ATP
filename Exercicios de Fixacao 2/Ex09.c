#include <stdio.h>
int main() {
    int numero1, numero2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &numero1);
    printf("Digite o segundo numero: ");
    scanf("%d", &numero2);
    if(numero1 % 2 == 0 && numero2 % 2 == 0) {
        printf("Os dois numeros sao pares\n");
        int operador = numero1 + numero2;
        printf("Adicao = %d", operador);
    } 
    else if(numero1 % 2 != 0 && numero2 % 2 != 0) {
        printf("Os dois numeros sao impares\n");
        int operador = numero1 - numero2;
        printf("Subtracao = %d", operador);
    }
    else if(numero1 % 2 == 0 && numero2 % 2 != 0) {
        printf("Os primeiro e par e o segundo e impar\n");
        int operador = numero1 * numero2;
        printf("Multiplicacao = %d", operador);
    } 
    else {
        printf("Os primeiro e impar e o segundo e par\n");
        float operador = (float)numero1 / numero2;
        printf("Divisao = %.2f", operador);
    }
    return 0;
}
