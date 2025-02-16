// Um comerciante deseja saber qual e o lucro percentual que ele esta tendo com a venda 
// de mercadorias. Calcule o lucro percentual de uma mercadoria ao serem fornecidos o preco
// de compra e o preco de venda da mesma
#include <stdio.h> 

int main() {
    float preco_compra, preco_venda, lucro;
    printf("Digite o preco de compra: ");
    scanf("%f", &preco_compra);
    printf("Digite o preco de venda: ");
    scanf("%f", &preco_venda);
    lucro = ((preco_venda - preco_compra) / preco_compra) * 100;
    printf("Lucro percentual: %.2f%%", lucro);

    return 0;
}
