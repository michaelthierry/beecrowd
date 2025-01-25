/**
 * @file 1038.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1038 - Lanche
 * @version 0.1
 * @date 2025-01-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variavei
    int codigoItem, quantidadeItem;
    double total;
    // lendo do usuário
    scanf("%d %d", &codigoItem, &quantidadeItem);
    // selecionando
    switch(codigoItem) {

        case 1:
            // calculando
            total = quantidadeItem * 4.00;
            // resultado
            printf("Total: R$ %.2lf\n", total);
            // sai do switch
            break;
        case 2:
            // calculando
            total = quantidadeItem * 4.50;
            // resultado
            printf("Total: R$ %.2lf\n", total);
            // sai do switch
            break;
        case 3:
            // calculando
            total = quantidadeItem * 5.00;
            // resultado
            printf("Total: R$ %.2lf\n", total);
            // sai do switch
            break;
        case 4:
            // calculando
            total = quantidadeItem * 2.00;
            // resultado
            printf("Total: R$ %.2lf\n", total);
            // sai do switch
            break;
        case 5:
        // calculando
            total = quantidadeItem * 1.50;
            // resultado
            printf("Total: R$ %.2lf\n", total);
            // sai do switch
            break;
        default:
            break;
    }
    // fim 
    return 0;
}