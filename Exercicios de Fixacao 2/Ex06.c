// Faca um algoritmo que receba a altura e o sexo deuma pessoa, calcule
// e exiba o peso ideal, utilizando as seguintes formulas: 
// homens: (72.7 * altura) -58
// mulheres (62.1* altura) - 44.7

#include <stdio.h>

int main() {
    char sexo;
    float altura;

    printf("Qual e o seu sexo? [M] / [F] ");
    scanf(" %c", &sexo);

    printf("Qual e a sua altura? ");
    scanf("%f", &altura);

    if (sexo == 'M' || sexo == 'm') {
        float peso_ideal = (72.7 * altura) - 58;
        printf("Peso ideal: %.2f", peso_ideal);
    } else {
        float peso_ideal = (62.1 * altura) - 44.7;
        printf("Peso ideal: %.2f", peso_ideal);
    }

    return 0;
}