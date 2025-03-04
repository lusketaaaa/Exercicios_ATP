#include <stdio.h>
int main() {
    int idade, anoContratacao, numeroPendentes, anoAtual;
    float salarioBase, salarioFinal;

    printf("Digite o ano atual: \n");
    scanf("%d", &anoAtual);

    printf("Digite o ano de contratacao: \n");
    scanf("%d", &anoContratacao);
    
    int anosEmpresa = anoAtual - anoContratacao;

    printf("Digite a idade: \n");
    scanf("%d", &idade);

    printf("Digite o numero de dependentes: \n");
    scanf("%d", &numeroPendentes);

    printf("Digite o salario base: \n");
    scanf("%f", &salarioBase);

    int adicionalIdade = idade - 25;
    salarioFinal = salarioBase + (salarioBase * (adicionalIdade * 0.01) + (salarioBase * (anosEmpresa * 0.03)) + salarioBase * (numeroPendentes * 0.05));

    printf("Salario final: R$ %.2f", salarioFinal);

    return 0;
}