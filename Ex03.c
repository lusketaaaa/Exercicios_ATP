// Apos o conhecimento de um numerador e um denominador, construa um algoritmo para fornecer 
// o resto dessa divisao
#include <stdio.h> 

int main() {
    int numerador, denominador, resto;
    printf("Digite o numerador: ");
    scanf("%d", &numerador);
    printf("Digite o denominador: ");
    scanf("%d", &denominador);
    resto = numerador % denominador;
    printf("O resto de %d dividido por %d e %d", numerador, denominador, resto);
    
    return 0;
}
