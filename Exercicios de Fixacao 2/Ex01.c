// Faca um algoritmo que receba quatro notas de um aluno, calcule e exiba a media aritmetica das 
// notas e a mensagem de "Aprovado" para media superior ou igual a 7.0 ou a mensagem de reprovado
// para media inferior a 7.0

#include <stdio.h>
int main() {
    float nota1, nota2, nota3, nota4, media;
    printf("Digite as notas do aluno: \n");
    scanf("%f %f %f %g", &nota1, &nota2, &nota3, &nota4);
    media = (nota1 + nota2 + nota3 + nota4) / 4;
    printf("Media:%2.f\n", media);
    if(media >= 7.0) {
        printf("Aprovado\n");
    } else {
        printf("Reprovado\n");
    }
    return 0;
}
