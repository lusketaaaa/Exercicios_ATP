// Faca um algoritmo que receba o valor de um deposito e o valor da taxa de juros
// Calcule e exiba o valor do deposito, o valor do rendimento e o valor total depois do
// rendimento
#include <stdio.h> 

int main() {
    float deposito, taxa, rendimento, total;
    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);
    printf("Digite o valor da taxa de juros: ");
    scanf("%f", &taxa);
    taxa = taxa / 100;
    rendimento = (deposito * taxa);
    total = deposito + rendimento;
    printf("Valor do deposito inicial: %.2f\n", deposito); 
    printf("Valor do rendimento: %.2f\n", rendimento); 
    printf("Valor total: %.2f", total); 
    return 0;
}
