/**
 * @file 1004.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1004 - Produto simples
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    int primeiroValor, segundoValor, produto;
    // lendo do usuario
    scanf("%i", &primeiroValor);
    scanf("%i", &segundoValor);
    // calculando
    produto = (primeiroValor * segundoValor);
    // exibindo resultado
    printf("PROD = %i\n", produto);
    // fim 
    return 0;
}