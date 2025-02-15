// Faca  um algoritmo que receba o ano de nascimento de uma pessoa e o ano atual, 
// calcule e exiba: a idade dessa pessoa e a idade convertida em semanas
// 1 ano = 365 dias / 7 = aproximadamento 52 semanas por ano de vida
#include <stdio.h> 

int main() {
    int ano_nascimento, ano_atual, idade_semanas, idade;
    printf("Ano de nascimento: ");
    scanf("%d", &ano_nascimento);
    printf("Ano atual: ");
    scanf("%d", &ano_atual);
    idade = ano_atual - ano_nascimento;
    idade_semanas = (365 / 7) * idade;
    printf("Sua idade: %d, Sua idade em semanas: %d", idade, idade_semanas);

    return 0;
}
