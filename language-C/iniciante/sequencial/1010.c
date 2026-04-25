/**
 * @file 1010.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Calculo Simples
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int codigoPeca1, quantidadePeca1, codigoPeca2, quantidadePeca2;
    double valorPeca1, valorPeca2, valorTotal;
    
    scanf("%i %i %lf", &codigoPeca1, &quantidadePeca1, &valorPeca1);
    scanf("%i %i %lf", &codigoPeca2, &quantidadePeca2, &valorPeca2);

    valorTotal = (valorPeca1 * quantidadePeca1) + (valorPeca2 * quantidadePeca2);
    
    printf("VALOR A PAGAR: R$ %.2lf\n", valorTotal);

    return 0;
}