#include <stdio.h>
int main() {
    float preco;
    int codigo;
    printf("Digite o codigo do produto: ");
    scanf("%d", &codigo);
    printf("Digite o preco do produto: ");
    scanf("%f", &preco);
    if(codigo == 1) {
        printf("Sul");
    }
    else if(codigo == 2) {
        printf("Norte");
    }
    else if(codigo == 3) {
        printf("Leste");
    }
    else if(codigo == 4) {
        printf("Oeste");
    }
    else if(codigo == 5 || codigo ==6) {
        printf("Nordeste");
    }
    else if(codigo == 7 || codigo ==8 || codigo == 9) {
        printf("Sudeste");
    }
    else if(codigo >= 10 && codigo <= 20) {
        printf("Centro-Oeste");
    }
    else {
        printf("Noroeste");
    }
    return 0;
}