#include <stdio.h>
int main(){ 
    // No exercicio nao foi especificado int ou float, vou considerar como valores de entrada inteiros...
    int ladoA, ladoB, ladoC;
    printf("Digite o primeiro lado do triangulo: \n");
    scanf("%d", &ladoA);
    printf("Digite o segundo lado do triangulo: \n");
    scanf("%d", &ladoB);
    printf("Digite o terceiro lado do triangulo: \n");
    scanf("%d", &ladoC);
    if(ladoA + ladoB > ladoC && ladoA + ladoC > ladoB && ladoC + ladoB > ladoA) {
        if(ladoA == ladoB && ladoB == ladoC) {
            printf("Triangulo Equilatero\n");
        }
        else if(ladoA != ladoB && ladoB != ladoC && ladoA != ladoC) {
            printf("Triangulo Escaleno\n");
        }
        else {
            printf("Triangulo Isosceles\n");
        }
    } 
    else {
        printf("Nao e um triangulo\n");
    }

    return 0;
}