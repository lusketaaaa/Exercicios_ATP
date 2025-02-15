// Voce fz uma aplicacao de P reais a uma taxa de juros i constante
// por um periodode n meses, qual o montante M apos o termino da aplicacao? 
// M = P(1 + i) ** n. Calcule tambem qual o lucro em reais e em percentual 
// resultante da aplicacao, sabendo que serao descontados 8% de IOF sobre o lucro
// bruto
#include <stdio.h> 
#include <math.h>

int main() {
    float investimento_inicial, montante, taxa_de_juros, taxa_iof, lucro, lucro_descontado, lucro_percentual;
    int meses;
    taxa_iof = 0.08;
    printf("Digite o valor do investimento inicial: ");
    scanf("%f", &investimento_inicial);
    printf("Digite a quantidade de meses: ");
    scanf("%d", &meses);
    printf("Digite a porcentagem da taxa de juros: ");
    scanf("%f", &taxa_de_juros);
    taxa_de_juros = taxa_de_juros / 100;
    montante = investimento_inicial * (pow((1 + taxa_de_juros), meses));
    lucro = montante - investimento_inicial;
    lucro_descontado = lucro - (lucro * 0.08);
    lucro_percentual = (lucro_descontado / investimento_inicial) * 100;
    printf("Montante: %.2f\n", montante);
    printf("Lucro bruto: %.2f\n", lucro);
    printf("Lucro com IOF descontado: %.2f\n", lucro_descontado);
    printf("Lucro percentual com IOF descontado: %.2f%%\n", lucro_percentual);

    return 0;
}
