// Faca um algoritmo que receba o peso de uma pessoa, um valor inteiro, calcule e exiba:
// o peso em gramas, se a pessoa engordar 5%, qual sera o novo peso em gramas?
#include <stdio.h> 

int main() {
    int peso, peso_gramas, peso_engordou_gramas;
    printf("Digite o seu peso em kg (valor inteiro): ");
    scanf("%d", &peso);
    peso_gramas = peso * 1000;
    peso_engordou_gramas = peso_gramas + (peso_gramas * 0.05);
    printf("Seu peso em gramas: %d\n", peso_gramas);
    printf("Seu peso em gramas se voce engordasse %: %d", peso_engordou_gramas);

    return 0;
}
