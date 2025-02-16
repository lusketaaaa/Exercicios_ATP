// Dado dois numeros inteiros e distintos, faca um algoritmo para definir qual 
// o maior elemento
#include <stdio.h> 

int main() {
    int num1, num2;
    printf("Digite dois numeros: \n");
    scanf("%d %d", &num1, &num2);
    if(num1 == num2) {
        printf("Os numeros sao iguais!");
    } else {
        if(num1 > num2) {
            printf("O numero %d e maior que o numero %d", num1, num2);
        } else {
            printf("O numero %d e maior que o numero %d", num2, num1);
        }
    }
    return 0;
}
