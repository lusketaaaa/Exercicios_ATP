#include <stdio.h>
int main() {
    int numConsumidor, qtdKWH, contadorConsumidores = 0, codigoMaiorConsumo, codigoMenorConsumo;
    float precoKWH, totalKWH = 0, mediaConsumo, maiorConsumoValor = 0, maiorConsumoKWH, mediaConsumoKwh,
     menorConsumoValor = 9999999, menorConsumoKWH, totCResidencial = 0, totCComercial = 0, totCIndustrial = 0, consumo, totalConsumo = 0;
    char tipoConsumo, pct = '%';
    
    printf("Digite o valor do Kwh:\n");
    scanf("%f", &precoKWH);

    printf("Digite o numero do consumidor:\n");
    scanf("%d", &numConsumidor);

    while(numConsumidor != 0) {

        contadorConsumidores += 1;

        printf("Digite a quantidade de Kwh consumida no mes:\n");
        scanf("%d", &qtdKWH);
        totalKWH += qtdKWH;
        

        printf("Digite o tipo do consumo, sendo Residencial[R] Comercial[C] e Industrial[I]:\n");
        scanf(" %c", &tipoConsumo);

        consumo = qtdKWH * precoKWH;
        totalConsumo += consumo;

        if(tipoConsumo == 'R' || tipoConsumo == 'r')
            totCResidencial += consumo;
        else if(tipoConsumo == 'C' || tipoConsumo == 'c')
            totCComercial += consumo;
        else
            totCIndustrial += consumo;

        if(consumo > maiorConsumoValor) {
            maiorConsumoValor = consumo;
            maiorConsumoKWH = qtdKWH;
            codigoMaiorConsumo = numConsumidor;
        }
        else if(menorConsumoValor > consumo) {
            menorConsumoValor = consumo;
            menorConsumoKWH = qtdKWH;
            codigoMenorConsumo = numConsumidor;
        }

        printf("Codigo do consumidor: %d\nQuantidade de Kwh: %d\nValor final: %.2f\nTipo de consumo: %c\n", numConsumidor, qtdKWH, consumo, tipoConsumo);

        printf("Digite o numero do consumidor:\n");
        scanf("%d", &numConsumidor);

    }

    if (contadorConsumidores > 0) {
        mediaConsumo = totalConsumo / contadorConsumidores;
        mediaConsumoKwh = totalKWH / contadorConsumidores;
    } else {
        mediaConsumo = 0;
        mediaConsumoKwh = 0;
    }

    printf("Maior consumo verificado:\n");
    printf("Codigo: %d\nQuantidade de Kwh consumida: %.0f\n Valor final do maior consumo: %.2f\n", codigoMaiorConsumo, maiorConsumoKWH, maiorConsumoValor);

    printf("Menor consumo verificado:\n");
    printf("Codigo: %d\nQuantidade de Kwh consumida: %.0f\nValor final do menor consumo: %.2f\n", codigoMenorConsumo, menorConsumoKWH, menorConsumoValor);

    printf("Media de consumo: %.2f\n", mediaConsumo);
    printf("Media de Kwh: %.2f\n", mediaConsumoKwh);

    printf("Total de consumo Residencial: %.2f\n", totCResidencial);
    printf("Total de consumo Comercial: %.2f\n", totCComercial);
    printf("Total de consumo Industrial: %.2f\n", totCIndustrial);

    return 0;
}