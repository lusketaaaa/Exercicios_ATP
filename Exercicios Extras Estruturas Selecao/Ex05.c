#include <stdio.h> 
int main() {

    int idade, anoContratacao, anoAtual, anosEmpresa, descontoOuAcrescimo, matricula;
    char sexo;
    float salarioBase, salarioFinal;

    printf("Digite a idade do funcionario:\n");
    scanf("%d", &idade);

    printf("Digite o sexo do funcionario [M/F]:\n");
    scanf(" %c", &sexo);

    printf("Digite a matricula do funcionario:\n");
    scanf("%d", &matricula);

    printf("Digite o salario base do funcionario:\n");
    scanf("%f", &salarioBase);

    printf("Digite o ano de contratacao do funcionario:\n");
    scanf("%d", &anoContratacao);

    printf("Digite o ano atual:\n");
    scanf("%d", &anoAtual);

    anosEmpresa = anoAtual - anoContratacao;

    // Primeiro bloco de IF: faixa etaria entre 18-39 anos -> 4 possibilidades: 

    if(anosEmpresa <= 10 && sexo == 'M' || sexo == 'm' && idade >= 18 && idade <= 39) {
        descontoOuAcrescimo = -10;
        salarioFinal = salarioBase + salarioBase * 0.10 + descontoOuAcrescimo;
    }
    else if(anosEmpresa <= 10 && sexo == 'F' || sexo == 'F' && idade >= 18 && idade <= 39) {
        descontoOuAcrescimo = -11;
        salarioFinal = salarioBase + salarioBase * 0.08 + descontoOuAcrescimo;
    }
    else if(anosEmpresa > 10 && sexo == 'F' || sexo == 'F' && idade >= 18 && idade <= 39) {
        descontoOuAcrescimo = 16;
        salarioFinal = salarioBase + salarioBase * 0.08 + descontoOuAcrescimo;
    }
    else if(anosEmpresa > 10 && sexo == 'M' || sexo == 'm' && idade >= 18 && idade <= 39) {
        descontoOuAcrescimo = 17;
        salarioFinal = salarioBase + salarioBase * 0.10 + descontoOuAcrescimo;
    }

    // Segundo bloco de IF: faixa etaria entre 40-69 anos -> 4 possibilidades: 

    else if(anosEmpresa <= 10 && sexo == 'M' || sexo == 'm' && idade >= 40 && idade <= 69) {
        descontoOuAcrescimo = -5;
        salarioFinal = salarioBase + salarioBase * 0.08 + descontoOuAcrescimo;
    }
    else if(anosEmpresa <= 10 && sexo == 'F' || sexo == 'F' && idade >= 40 && idade <= 69) {
        descontoOuAcrescimo = -7;
        salarioFinal = salarioBase + salarioBase * 0.10 + descontoOuAcrescimo;
    }
    else if(anosEmpresa > 10 && sexo == 'F' || sexo == 'F' && idade >= 40 && idade <= 69) {
        descontoOuAcrescimo = 14;
        salarioFinal = salarioBase + salarioBase * 0.10 + descontoOuAcrescimo;
    }
    else if(anosEmpresa > 10 && sexo == 'M' || sexo == 'm' && idade >= 40 && idade <= 69) {
        descontoOuAcrescimo = 15;
        salarioFinal = salarioBase + salarioBase * 0.08 + descontoOuAcrescimo;
    }

    // Terceiro bloco de IF: faixa etaria entre 40-69 anos -> 4 possibilidades: 

    else if(anosEmpresa <= 10 && sexo == 'M' || sexo == 'm' && idade >= 70 && idade <= 99) {
        descontoOuAcrescimo = -15;
        salarioFinal = salarioBase + salarioBase * 0.15 + descontoOuAcrescimo;
    }
    else if(anosEmpresa <= 10 && sexo == 'F' || sexo == 'F' && idade >= 70 && idade <= 99) {
        descontoOuAcrescimo = -17;
        salarioFinal = salarioBase + salarioBase * 0.17 + descontoOuAcrescimo;
    }
    else if(anosEmpresa > 10 && sexo == 'F' || sexo == 'F' && idade >= 70 && idade <= 99) {
        descontoOuAcrescimo = 12;
        salarioFinal = salarioBase + salarioBase * 0.17 + descontoOuAcrescimo;
    }
    else if(anosEmpresa > 10 && sexo == 'M' || sexo == 'm' && idade >= 70 && idade <= 99) {
        descontoOuAcrescimo = 13;
        salarioFinal = salarioBase + salarioBase * 0.15 + descontoOuAcrescimo;
    }
    else {
        printf("ERRO, FAIXA ETARIA INVALIDA!");
    }
    
    printf("Dados do funcionario:\n");
    printf("Idade: %d\n", idade);
    printf("Sexo: %c\n", sexo);
    printf("Matricula: %d\n", matricula);
    printf("Ano de contratacao: %d\n", anoContratacao);
    printf("Ano atual: %d\n", anoAtual);
    printf("Anos na empresa: %d\n", anosEmpresa);
    printf("Salario Base: R$ %.2f\n", salarioBase);
    printf("Salario final: R$ %.2f", salarioFinal);

    return 0;
}