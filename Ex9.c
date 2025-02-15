// Faca um algoritmo que receba a idade de uma pessoa em anos, calcule e exiba essa idade em:
// meses, dias, horas, minutos
#include <stdio.h> 

int main() {
    int idade, idade_meses, idade_dias, idade_horas, idade_minutos;
    printf("Digite sua idade: ");
    scanf("%d", &idade);
    idade_meses = idade * 12;
    idade_dias = idade * 365;
    idade_horas = idade_dias * 24;
    idade_minutos = idade_horas * 60;
    printf("Idade em meses: %d\n", idade_meses);
    printf("Idade em dias: %d\n", idade_dias);
    printf("Idade em horas: %d\n", idade_horas);
    printf("Idade em minutos: %d\n", idade_minutos);
    return 0;
}
