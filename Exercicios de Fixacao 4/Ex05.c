#include <stdio.h>
int main() {
    int somaDivisores;
    for(int x = 1; x <= 100; x++) {

        somaDivisores = 0;
        for(int z = 1; z < x; z++) {
            if(x % z == 0) {
                somaDivisores += z;
            }
        }
        if(somaDivisores == x) {
            printf("%d\n", x);
        }

    }
    return 0;
}