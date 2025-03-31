#include <stdio.h>
int main() {
    int invervalo1, intervalo2, somaDivisores = 0;

    printf("Digite o menor e o maior numero do intervalo:\n");

    scanf("%d %d", &invervalo1, &intervalo2);

    for(int x = invervalo1; x <= intervalo2; x++) {

        somaDivisores = 0;

        for(int y = 1; y <= x; y++) {
            if(x % y == 0) {
                somaDivisores += 1;
            }
            
        }

        if(somaDivisores == 2) {
            printf("%d eh primo\n", x);
        }
        
    }
    return 0;
}