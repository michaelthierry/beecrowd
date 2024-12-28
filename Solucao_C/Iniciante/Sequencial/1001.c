/**
 * @file 1001.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1001 - Extremamente Básico
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variáveis
    int primeiroValor, segundoValor, soma;
    // pegando valores
    scanf("%d %d", &primeiroValor, &segundoValor);
    // calculando
    soma = primeiroValor + segundoValor;
    // exibindo resultado
    printf("X = %d\n", soma);
    // fim
    return 0;
}