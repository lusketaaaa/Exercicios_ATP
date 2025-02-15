// Faca um algoritmo que receba duas notas de um aluno e seus respectivos
// pesos, calcule e exiba a media ponderada dessas notas
#include <stdio.h> 

int main() {
    float nota1, nota2, media;
    int peso1, peso2, soma_peso;
    printf("Digite a primeira nota e o peso dela: \n");
    scanf("%f %d", &nota1, &peso1);
    printf("Digite a segunda nota e o peso dela: \n");
    scanf("%f %d", &nota2, &peso2);
    soma_peso = peso1 + peso2;
    media = ((nota1 * peso1) + (nota2 * peso2)) / soma_peso;
    printf("Media ponterada: %.2f", media);
    return 0;
}
