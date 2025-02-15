// Faca um algoritmo que receba o salario de um funcionario, calcule imprima
// o novo salario, sabendo que ele sofreu um aumento de 25%
#include <stdio.h> 

int main() {
    float salario_antigo, salario_novo, porcentagem_aumento;
    printf("Digite seu salario: ");
    scanf("%f", &salario_antigo);
    printf("Digite a porcentagem do aumento: ");
    scanf("%f", &porcentagem_aumento);
    porcentagem_aumento = porcentagem_aumento / 100;
    salario_novo = salario_antigo + (salario_antigo * porcentagem_aumento);
    printf("Salario novo: %.2f, Salario antigo: %.2f", salario_novo, salario_antigo);
    return 0;
}
