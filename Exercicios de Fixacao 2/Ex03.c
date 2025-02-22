// No curso de Bacharelado de Ciencia da Computacao, a nota final do estudante e calculada
// a partir de 3 notas atribuidas respectivamente a um trabalho de laboratorio, a uma 
// avaliacao semestral e a um exame final. As notas variam de 0 a 10 e a nota final
// e a media ponderada das 3 notas mencionadas. Segue o peso das notas: 
// laboratorio: peso 2 | Av.semestral: peso 3 | Exame final: peso 5
#include <stdio.h>
int main() {
    float nota_final, nota_laboratorio, nota_semestral, nota_exame;
    printf("Digite a nota do trabalho do laboratorio: ");
    scanf("%f", &nota_laboratorio);
    printf("Digite a nota da avaliacao semestral: ");
    scanf("%f", &nota_semestral);
    printf("Digite a nota do trabalho do exame final: ");
    scanf("%f", &nota_exame);
    nota_final = (nota_exame * 5 + nota_laboratorio * 2 + nota_semestral * 3) / (3 + 5 + 2);
    if (nota_final >= 8) {
        printf("Conceito: A");
    } 
    else if(nota_final >=7 && nota_final < 8) {
        printf("Conceito: B");
    }
    else if(nota_final >= 6 && nota_final < 7) {
        printf("Conceito: C");
    } 
    else if(nota_final >=5 && nota_final < 6) {
        printf("Conceito: D");
    } 
    else {
        printf("Conceito: E");
    }
}