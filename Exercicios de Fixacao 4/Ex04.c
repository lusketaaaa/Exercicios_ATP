#include <stdio.h>
int main() {
    int parteDeCima = 1, parteDeBaixo = 1;
    float divisao, soma = 0;
    for(int x = 0; x < 50; x++) {
        
        divisao = (float)parteDeCima / parteDeBaixo;
        soma =+ divisao;
        parteDeCima += 2;
        parteDeBaixo += 1;
    }
    printf("Resultado: %.2f", soma);
    return 0;
}