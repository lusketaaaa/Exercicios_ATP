// Sabe-se que o quilowatt de energia custa um quinto do salario minimo, faca
// um algoritmo que receba o valor do salario minimo e a quandide de quilowatts
// gasta por uma residencia. Calcule e exiba: o valor em reais de cada quilowatt,
// o valor em reais a ser pago, o novo valor a ser pago com um desconto de 15%
#include <stdio.h> 

int main() {
    float salario_minimo, valor_quilowatt, total, total_desconto, porcentagem_desconto;
    int qtd_quilowatt;
    printf("Digite o valor do salario minimo: ");
    scanf("%f", &salario_minimo);
    printf("Digite a quantidade total de quilowatts: ");
    scanf("%d", &qtd_quilowatt);
    printf("Digite a porcentagem do desconto: ");
    scanf("%f", &porcentagem_desconto);
    valor_quilowatt = salario_minimo / 5;
    total = valor_quilowatt * qtd_quilowatt;
    total_desconto = total - (total * (porcentagem_desconto / 100));
    printf("Valor do quilowatt: %.2f\n", valor_quilowatt);
    printf("Valor total da conta: %.2f\n", total);
    printf("Valor total com desconto: %.2f\n", total_desconto);

    return 0;
}
