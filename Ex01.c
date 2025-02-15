// Faca um algoritmo que receba tres notas de um aluno, calcule a media aritmetica entre as
// tres notas e exiba a mensagem de "Aprovado" ou "Reprovado", considerando a media de aprovacao += 7;
#include <stdio.h> 

int main() {
    float num1, num2, media;
    printf("Digite a primeira nota: ");
    scanf("%f", &num1);
    printf("Digite a segunda nota: ");
    scanf("%f", &num2);
    media = (num1 + num2) / 2;
    if(media >= 7) 
    {
        printf("Aprovado!\n");
    } 
    else 
    {
        printf("Reprovado!");
    }

    return 0;
}
