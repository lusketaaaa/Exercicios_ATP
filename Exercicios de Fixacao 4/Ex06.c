#include <stdio.h>
int main() {

    int numero, fatorial = 1, numeroSalvo;
    printf("Digite um numero para calcular o fatorial:\n");
    scanf("%d", &numero);
    while(numero > 1) {
        fatorial *= numero;
        numero -= 1;
    }
    if(numeroSalvo > 1)
        printf("%d\n", fatorial);
    else
        printf("1\n");


    return 0;
}