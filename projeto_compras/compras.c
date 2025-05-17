#include <stdio.h>
#include <string.h>

#define MAX_PRODUTOS 5
#define MAX_NOME 50

void mostrarProdutos(char nomes[][MAX_NOME], float precos[], int tamanho) {
    printf("\n--- Produtos Disponíveis ---\n");
    for (int i = 0; i < tamanho; i++) {
        printf("%d - %s: R$ %.2f\n", i, nomes[i], precos[i]);
    }
}

float calcularTotal(int carrinho[], float precos[], int tamanho) {
    float total = 0;
    for (int i = 0; i < tamanho; i++) {
        total += carrinho[i] * precos[i];
    }
    return total;
}

int main() {
    char produtos[MAX_PRODUTOS][MAX_NOME] = {
        "Arroz 5kg", "Feijão 1kg", "Macarrão", "Sabonete", "Refrigerante 2L"
    };
    float precos[MAX_PRODUTOS] = {25.0, 7.5, 4.0, 2.5, 8.0};
    int carrinho[MAX_PRODUTOS] = {0};
    int codigo, quantidade;
    char continuar;

    printf("=== Caixa de Autoatendimento ===\n");

    do {
        mostrarProdutos(produtos, precos, MAX_PRODUTOS);
        printf("Digite o código do produto: ");
        scanf("%d", &codigo);

        if (codigo < 0 || codigo >= MAX_PRODUTOS) {
            printf("Código inválido!\n");
            continue;
        }

        printf("Digite a quantidade: ");
        scanf("%d", &quantidade);

        carrinho[codigo] += quantidade;

        printf("Deseja adicionar mais produtos? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    float total = calcularTotal(carrinho, precos, MAX_PRODUTOS);
    printf("\nTotal da compra: R$ %.2f\n", total);

    printf("\nEscolha a forma de pagamento:\n");
    printf("1 - Pix (10%% de desconto)\n");
    printf("2 - Cartão de crédito (1x)\n");
    printf("3 - Cartão parcelado (10%% de acréscimo)\n");

    int opcao_pagamento, parcelas;
    scanf("%d", &opcao_pagamento);

    if (opcao_pagamento == 1) {
        float desconto = total * 0.10;
        printf("Desconto: R$ %.2f\n", desconto);
        printf("Total com desconto: R$ %.2f\n", total - desconto);
    } else if (opcao_pagamento == 2) {
        printf("Pagamento em 1x no cartão: R$ %.2f\n", total);
    } else if (opcao_pagamento == 3) {
        printf("Digite o número de parcelas: ");
        scanf("%d", &parcelas);
        float total_com_juros = total * 1.10;
        printf("Total com juros (10%%): R$ %.2f\n", total_com_juros);
        printf("Valor por parcela (%d x): R$ %.2f\n", parcelas, total_com_juros / parcelas);
    } else {
        printf("Opção inválida.\n");
    }

    printf("\nObrigado por comprar conosco!\n");

    return 0;
}
