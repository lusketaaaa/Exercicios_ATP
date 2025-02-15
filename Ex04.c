// Dado dois numeros inteiros, construa um algoritmo que seja capaz de definir se estes sao iguais, caso
// isso nao ocorrer, qual e o menor elemento
#include <stdio.h> 

int main() {
    int num1, num2;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    if(num1 == num2) {
        printf("Os numeros sao iguais!");
    } else {
        if(num1 < num2) {
            printf("O numero %d e o menor numero digitado", num1);
        } else {
            printf("O numero %d e o menor numero digitado", num2);
        }
    }
    
    return 0;
}
