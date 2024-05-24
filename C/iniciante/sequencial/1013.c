/**
 * @file 1013.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1013 - O maior
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main(){
    
    // variaveis
    int primeiroValor, segundoValor, terceiroValor, maiorValor;
    // lendo do usuário
    scanf("%i %i %i", &primeiroValor, &segundoValor, &terceiroValor);
    // encontrando o maior
    maiorValor = (primeiroValor + segundoValor + abs(primeiroValor - segundoValor)) / 2;
    maiorValor = (maiorValor + terceiroValor + abs(maiorValor - terceiroValor)) / 2;
    // exibindo resultado
    printf("%i eh o maior\n", maiorValor);
    // fim
    return 0;
}