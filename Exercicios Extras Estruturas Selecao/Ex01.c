#include <stdio.h>
#include <math.h>
int main() {
    float valorLataTinta = 50;
    float litrosLataTinta = 5; // cada litro pinta 3m2, logo, 5L = 15 m2
    float altura, raio, custo, areaCilindro, areaBase, areaLateral, qtdLitrosTotal, qtdLatasTotal;

    printf("Digite a altura e o raio: \n");
    scanf("%f %f", &altura, &raio);
    areaBase = 3.1415 * pow(raio, 2);
    areaLateral = 2 * 3.1415 * raio * altura;
    areaCilindro = 2 * areaBase + areaLateral;
    qtdLitrosTotal = areaCilindro / 3;
    qtdLatasTotal = qtdLitrosTotal / 5;
    custo = qtdLatasTotal * valorLataTinta;
    printf("Custo: R$ %.2f, Quantidade latas: %.2f", custo, qtdLatasTotal);
    return 0;
}