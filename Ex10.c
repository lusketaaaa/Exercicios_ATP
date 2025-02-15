// Faca um algoritmo que receba o salari de um funcionario, calcule e exiba o valor do imposto de renda,
// sabendo que o imposto equivale a 5% do salario, tambem imprima o valor liquido a receber
#include <stdio.h> 

int main() {
    float salario_bruto, salario_liquido;
    float imposto_renda = 0.05;
    printf("Digite seu salario bruto: ");
    scanf("%f", &salario_bruto);
    salario_liquido = salario_bruto - salario_bruto * imposto_renda;
    printf("Salario bruto: %.2f, Salario liquido: %.2f", salario_bruto, salario_liquido);
    return 0;
}
