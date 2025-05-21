#include <stdio.h>
#define TamanhoVetor 9
int main() {
    int numeros[TamanhoVetor], numero, contDivisores, contPrimos = 0;

    // Preenchendo vet numeros
    for(int x = 0; x < TamanhoVetor; x++) {
        printf("Digite o numero da posicao %d do vetor: ", x);
        scanf("%d", &numero);
        numeros[x] = numero;
    }

    for(int y = 0; y < TamanhoVetor; y++) {
        contDivisores = 0;
        for(int z = 1; z <= numeros[y] / 2; z++) {
            if(numeros[y] % z == 0) {
                contDivisores += 1;
            } 
        }
        if(contDivisores == 1) {
            contPrimos += 1;
            printf("Numero primo: %d\n", numeros[y]);
            printf("Indice: %d\n", y);
        }
    }


    return 0;
}
