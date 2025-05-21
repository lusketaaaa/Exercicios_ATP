#include <stdio.h>
#define TamanhoVetor 6
int main() {
    // Declarando o vetor
    int numeros[TamanhoVetor], numero, contPares = 0, contImpares = 0;
    int numerosPares[TamanhoVetor],  numerosImpares[TamanhoVetor];
    //Ler o vetor

    for(int x = 0; x < TamanhoVetor; x++) {
        numerosPares[x] = -9999;
        numerosImpares[x] = -9999;
    }

    for(int x = 0; x < TamanhoVetor; x++) {
        printf("Digite o numero da posicao %d do vetor: ", x);
        scanf("%d", &numero);
        numeros[x] = numero;
        if(numero % 2 == 0) {
            numerosPares[x] = numero;
            contPares += 1;
        }
        else {
            numerosImpares[x] = numero;
            contImpares += 1;
        }
    }

    // Printar os vetores

    printf("Quantidade de numeros pares: %d\n", contPares);
    printf("Quantidade de numeros impares: %d\n", contImpares);

    printf("Vetor original: \n");
    for(int x = 0; x < TamanhoVetor; x++) {
        printf("%d", numeros[x]);
    }

    printf("\n");

    printf("Vetor dos pares: \n");
    for(int x = 0; x < TamanhoVetor; x++) {
        if(numerosPares[x] != -9999) {
                printf("%d", numerosPares[x]);
        }
    }

    printf("\n");

    printf("Vetor dos impares: \n");
    for(int x = 0; x < TamanhoVetor; x++) {
        if(numerosImpares[x] != -9999) {
                printf("%d", numerosImpares[x]);
        }
    }

    return 0;
}
