#include<stdio.h>
#define TAMANHO 10
int main() {

    // Declarar os vetores
    int vet1[TAMANHO], vet2[TAMANHO], vetIntersec[TAMANHO * 2], num;

    // Preciso percorrer e preeencher os dois vetores, quando eu ler um, eu adiciono ele no vetor 
    // intersec e coloco x++, o x do vet1 comeca em 0 e do vet2 comeca em 1
    int y = 0;
    for(int x = 0; x < TAMANHO; x++) {
        printf("Digite um valor para a posicao %d do vetor1: ", x);
        scanf("%d", &num);
        vet1[x] = num;
        vetIntersec[y] = num;
        y += 2;
    }

    y = 1;
    for(int x = 0; x < TAMANHO; x++) {
        printf("Digite um valor para a posicao %d do vetor2: ", x);
        scanf("%d", &num);
        vet2[x] = num;
        vetIntersec[y] = num;
        y += 2;
    }

    for(int x = 0; x < TAMANHO * 2; x++) {
        printf("%d", vetIntersec[x]);
    }


    return 0;
}
