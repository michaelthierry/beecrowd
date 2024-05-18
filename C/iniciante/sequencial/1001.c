/**
 * @file 1001.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1001 - Extremamente Básico
 * @version 0.1
 * @date 2024-05-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    int primeiroValor, segundoValor, resultado;
    // lendo do usuario
    scanf("%i", &primeiroValor);
    scanf("%i", &segundoValor);
    // calculando
    resultado = primeiroValor + segundoValor;
    // exibindo
    printf("X = %i\n", resultado);

    //fim
    return 0;
}