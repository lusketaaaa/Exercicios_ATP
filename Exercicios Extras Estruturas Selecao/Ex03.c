#include <stdio.h>
int main() {
    float valorVenda, valorFinal;
    int codigoVenda;
    printf("Digite o valor da venda: \n");
    scanf("%f", &valorVenda);
    printf("Digite o codigo da venda: \n");
    scanf("%d", &codigoVenda);
    switch (codigoVenda)
    {
    case 1:
        valorFinal = valorVenda - valorVenda * 0.10;
        printf("Valor final: R$ %.2f, À vista em dinheiro ou cheque, recebe 10pct de desconto.", valorFinal);
        break;

    case 2: 
        valorFinal = valorVenda - valorVenda * 0.05;
        printf("Valor final: R$ %.2f, À vista no cartão de crédito, recebe 5pct de desconto.", valorFinal);
        break;

    case 3: 
        valorFinal = valorVenda;
        printf("Valor final: R$ %.2f, Em 2 vezes, preço normal de venda sem juros", valorFinal);
        break;

    case 4:
        valorFinal = valorVenda + valorVenda * 0.10;
        printf("Valor final: R$ %.2f, Em 3 vezes, preço normal de venda mais juros de 10pct", valorFinal);
        break;

    default:
        printf("Codigo invalido");
        break;
    }


    return 0;
}