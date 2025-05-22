#include <stdio.h>
#define TF 30
int main() {

    //Iniciando os vetores e variaveis
    int CodigoProduto[TF], QuantidadeProduto[TF], contadorCadastro = 0, codigoProdutoExcluir, posicaoProdutoExcluir;
    float PrecoProduto[TF], precoAntigo;
    char resposta, pct = '%';

    printf("-- SISTEMA DE GERENCIAMENTO DE ESTOQUE --\n");
    printf("Digite [C]adastrar [E]xcluir [S]AIR: ");
    scanf(" %c", &resposta);

    while(resposta == 'C' || resposta == 'c' || resposta == 'E' || resposta == 'e') {

        //Cadastro
        if(resposta == 'C' || resposta == 'c' ) {

            printf("-- CADASTRO DE PRODUTO -- \n");

            printf("Digite o codigo do produto: ");
            scanf("%d", &CodigoProduto[contadorCadastro]);

            printf("Digite a quantidade em estoque: ");
            scanf("%d", &QuantidadeProduto[contadorCadastro]);

            printf("Digite o preco do produto: ");
            scanf("%f", &PrecoProduto[contadorCadastro]);
            contadorCadastro++;
        }

        if(resposta == 'E' || resposta == 'e') {
            //Excluir produto
        printf("-- EXCLUIR PRODUTO --\n");
        printf("Digite o codigo do produto que voce deseja excluir: ");
        scanf("%d", &codigoProdutoExcluir);
        
        // Procurando o produto
        for(int x = 0; x < TF; x++) {
            if(CodigoProduto[x] == codigoProdutoExcluir)
                posicaoProdutoExcluir = x;
        }
        // Remanejando
        for(int z = posicaoProdutoExcluir; z < contadorCadastro; z++) {
            CodigoProduto[z] = CodigoProduto[z + 1];
            PrecoProduto[z] = PrecoProduto[z + 1];
            QuantidadeProduto[z] = QuantidadeProduto[z + 1];
        }
        // Como fizemos um remanejamento, temos um produto a menos, logo, preciso decrementar o contador...
        contadorCadastro--;
        }
        printf("Digite [C]adastrar [E]xcluir [S]AIR: ");
        scanf(" %c", &resposta);
    }

    // Relatorios
    printf("Relatório 1: Produtos com estoque inferior a 5 unidades: \n");
    for(int i = 0; i < contadorCadastro; i++) {
        if(QuantidadeProduto[i] < 5) {
            printf("Codigo: %d Quantidade: %d \n", CodigoProduto[i], QuantidadeProduto[i]);
        }
    }

    printf("Relatório 2: Produtos cujo preço é inferior a R$ 50,00 ou quantidade superior a 100 unidades: \n");
    for(int f = 0; f < contadorCadastro; f++) {
        if(PrecoProduto[f] < 50 && QuantidadeProduto[f] > 100) {
            precoAntigo = PrecoProduto[f];
            PrecoProduto[f] = PrecoProduto[f] - PrecoProduto[f] * 0.20; 
            printf("Codigo do produto: %d Preco antigo: %.2f Preco novo: %.2f Percentual aplicado: 20%c \n",CodigoProduto[f], precoAntigo, PrecoProduto[f], pct);
        }
        else if(PrecoProduto[f] < 50) {
            precoAntigo = PrecoProduto[f];
            PrecoProduto[f] = PrecoProduto[f] - PrecoProduto[f] * 0.10; 
            printf("Codigo do produto: %d Preco antigo: %.2f Preco novo: %.2f Percentual aplicado: 10%c\n",CodigoProduto[f], precoAntigo, PrecoProduto[f], pct);
        }
        else if(QuantidadeProduto[f] > 100) {
            precoAntigo = PrecoProduto[f];
            PrecoProduto[f] = PrecoProduto[f] - PrecoProduto[f] * 0.05; 
            printf("Codigo do produto: %d Preco antigo: %.2f Preco novo: %.2f Percentual aplicado: 5%c \n",CodigoProduto[f], precoAntigo, PrecoProduto[f], pct);
        }
    }
    return 0;
}
