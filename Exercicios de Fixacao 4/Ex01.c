#include <stdio.h>
int main() {
    int soma = 0;
    for(int x = 1; x < 501; x++) {
        if(x % 2 != 0 && x % 3 == 0) {
            soma += x;
        }
    }
    printf("Soma: %d\n", soma);

    return 0;
}