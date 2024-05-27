/**
 * @file 1010.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    int codigoPeca1, codigoPeca2;
    int quantidadePeca1, quantidadePeca2;
    double valorPeca1, valorPeca2, valorTotal;
    // lendo do usuario
    scanf("%i %i %lf", &codigoPeca1, &quantidadePeca1, &valorPeca1);
    scanf("%i %i %lf", &codigoPeca2, &quantidadePeca2, &valorPeca2);
    // calculando valor
    valorTotal = (valorPeca1 * quantidadePeca1) + (valorPeca2 * quantidadePeca2);
    // exibindo resultado
    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);
    // fim
    return 0;
}