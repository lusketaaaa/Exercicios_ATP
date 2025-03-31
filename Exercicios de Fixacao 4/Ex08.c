#include <stdio.h>
int main() {

    int voto, contadorC1 = 0, contadorC2 = 0, contadorC3 = 0, contadorC4 = 0, contadorNulo = 0, contadorBranco = 0;
    float pctBrancosENulosT;
    char pct = '%';

    printf("Digite seu voto: \n");
    scanf("%d", &voto);

    while(voto != 0) {
        switch (voto)
        {
        case 1:
            contadorC1 += 1;
            break;
        case 2:
            contadorC2 += 1;
            break;
        case 3:
            contadorC3 += 1;
            break;

        case 4:
            contadorC4 += 1;
            break;
        
        case 5:
            contadorNulo += 1;
            break; 
            
        case 6:
            contadorBranco += 1;
            break;
        default:
            break;
        }
        printf("Digite seu voto: \n");
        scanf("%d", &voto);
    }
    
    printf("Total de votos C1: %d\n", contadorC1);
    printf("Total de votos C2: %d\n", contadorC2);
    printf("Total de votos C3: %d\n", contadorC3);
    printf("Total de votos C4: %d\n", contadorC4);
    printf("Total de votos nulos: %d\n", contadorNulo);
    printf("Total de votos em branco: %d\n", contadorBranco);

    pctBrancosENulosT = (float)(contadorBranco + contadorNulo) / (contadorC1 + contadorC2 + contadorC3 + contadorC4 + contadorBranco + contadorNulo)  * 100;
    printf("Total de votos em branco e nulos sobre o total: %.2f %c\n", pctBrancosENulosT, pct);

    return 0;
}