/**
 * @file 1003.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1003 - Soma Simples
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variaveis
    int primeiroValor, segundoValor, soma;
    // lendo do usuário
    scanf("%d %d", &primeiroValor, &segundoValor);
    // calculando
    soma = primeiroValor + segundoValor;
    // exebindo resultado
    printf("SOMA = %d\n", soma);
    // fim
    return 0;
}