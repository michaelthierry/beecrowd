/**
 * @file 1010.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1010 - Calculo Simples
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // alocando variaveis
    int codigoPeca1, codigoPeca2, quantidadePeca1, quantidadePeca2;
    double valorPeca1, valorPeca2, valorTotal;
    // lendo do usuario
    scanf("%d %d %lf", &codigoPeca1, &quantidadePeca1, &valorPeca1);
    scanf("%d %d %lf", &codigoPeca2, &quantidadePeca2, &valorPeca2);
    // calculando o total
    valorTotal = (quantidadePeca1 * valorPeca1) + (quantidadePeca2 * valorPeca2);
    // exibindo resultado
    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
    // fim
    return 0;
}