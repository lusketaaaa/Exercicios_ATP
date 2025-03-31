#include <stdio.h>
int main() {

    int i = 0, contadorHomens = 0, contadorMulheres = 0, contadorMulheresSim = 0, contadorHomensSim = 0, contagemSim = 0, contagemNao = 0;
    char sexo, resposta, pct = '%';
    float pctMNao, pctFsim;

    while(i < 2000) {

        printf("Digite seu sexo [M/F]: \n");
        scanf(" %c", &sexo);

        printf("Gostou do produto ou nao? [S/N]: \n");
        scanf(" %c", &resposta);

        if(sexo == 'M' || sexo == 'm') 
            contadorHomens += 1;
        else
            contadorMulheres += 1;

        if(sexo == 'M' || sexo == 'm' && resposta == 'S' || resposta == 's') 
            contadorHomensSim += 1;

        else if(sexo == 'F' || sexo == 'f' && resposta == 'S' || resposta == 's')
            contadorMulheresSim += 1;
    }

    contagemSim = contadorHomensSim + contadorMulheresSim;
    contagemNao = 2000 - contagemSim;

    pctFsim = ((float)contadorMulheresSim / contadorMulheres) * 100;
    pctMNao = ((float)contadorHomensSim / contadorHomens) * 100;

    printf("O numero de pessoas que responderam sim: %d\n", contagemSim);
    printf("O numero de pessoas que responderam nao: %d\n", contagemNao);
    printf("A porcentagem de pessoas do sexo feminino que responderam sim: %.2f %c\n", pctFsim, pct);
    printf("A porcentagem de pessoas do sexo masculino que responderam nao: %.2f %c\n", pctMNao, pct);

    return 0;
}