/**
 * @file 1003.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1003 - Soma simples
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    int primeiroValor, segundoValor, soma;
    // lendo do usuario
    scanf("%i", &primeiroValor);
    scanf("%i", &segundoValor);
    // calculando
    soma = primeiroValor + segundoValor;
    // exidindo resultado
    printf("SOMA = %i\n", soma);
    // fim
    return 0;
}