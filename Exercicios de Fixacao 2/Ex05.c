// Faca um algoritmo que receba a idade de uma pessoa e exiba se ela e maior de idade
// ou nao;
#include <stdio.h>
int main() {
    int idade;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    if(idade < 18) {
        printf("Voce e menor de idade");
    } else {
        printf("Voce e maior de idade");
    }
}