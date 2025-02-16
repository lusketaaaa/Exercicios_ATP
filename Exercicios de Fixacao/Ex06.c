// Elaborar um algoritmo que faca a conversao de graus Fahrenheit para celsius.
#include <stdio.h> 

int main() {
    float tempF, tempCelsius;
    printf("Digite a temperatura em graus Fahrenheit: ");
    scanf("%f", &tempF);
    tempCelsius = ((tempF - 32) * 5) / 9;
    printf("Temperatura em celsius: %.2f", tempCelsius);
    
    return 0;
}
