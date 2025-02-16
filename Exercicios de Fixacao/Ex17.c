// Um trabalhador recebe 20 reais por hora normal trabalhada e um acrescimo de 50% sobre
// este valor, para cada hora extra trabalhada, calcule qual o valor de seu salario apos uma
// semana de trabalho, com jornada de 44 horas semanais. O algoritmo devera inicialmente requisitar ao
// usuario qual foi a quantidade de horas que o trabalhador realmente trabalhou na semana
#include <stdio.h> 
#include <math.h>

int main() {
    float salario;
    int hora_normal, hora_extra, horas_semanais, horas_normais, horas_extra;
    hora_normal = 20;
    hora_extra = hora_normal + (hora_normal * 0.5);
    horas_semanais = 44;
    printf("Digite a quantidade de horas normais trabalhadas: ");
    scanf("%d", &horas_normais);
    horas_extra = horas_semanais - horas_normais;
    salario = (hora_normal * horas_normais) + (hora_extra * horas_extra);
    printf("Salario final: %.2f", salario);


    return 0;
}
