// Construa um algoritmo capaz de identificar o maior elemento entre
// tres elementos fornecidos
#include <stdio.h> 

int main() {
    float elemento1, elemento2, elemento3;
    float maiorElemento = 0;
    printf("Digite o primeiro elemento: ");
    scanf("%f", &elemento1);
    printf("Digite o segundo elemento: ");
    scanf("%f", &elemento2);
    printf("Digite o terceiro elemento: ");
    scanf("%f", &elemento3);
    if(elemento1 > elemento2 && elemento1 > elemento3) {
        maiorElemento = elemento1;
    } 
    else if (elemento2 > elemento1 && elemento2 > elemento3){
        maiorElemento = elemento2;
    } 
    else {
        maiorElemento = elemento3;
    }
    printf("Maior elemento: %.2f", maiorElemento);
    
    return 0;
}
