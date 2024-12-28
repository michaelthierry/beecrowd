/**
 * @file 1004.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1004 - Produto Simples
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variaveis
    int primeiroValor, segundoValor, produto;
    // lendo do usuário
    scanf("%d %d", &primeiroValor, &segundoValor);
    // calculando
    produto = primeiroValor * segundoValor;
    // exibindo resultado
    printf("PROD = %d\n", produto);
    // fim
    return 0;
}