// Faca um algoritmo que calcule e exiba o salario reajustado de um funcionario
// de acordo com a seguinte regra: 
// salarios ate 300, reajuste de 50%
// maiores que 300, reajuste de 30%

#include <stdio.h> 
int main() {
    float salario;
    float salario_reajuste = 0;
    printf("Digite o salario: ");
    scanf("%f", &salario);
    if(salario <= 300) {
        salario_reajuste = salario + salario * 0.5;
    } else {
        salario_reajuste = salario + salario * 0.3;
    }
    printf("Salario com reajuste: %.2f", salario_reajuste);
    return 0;
}