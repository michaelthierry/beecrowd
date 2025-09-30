/**
 * @file 1013.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief O maior
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <stdlib.h>

int main(){
    
    int primeiroValor, segundoValor, terceiroValor, maiorValor;
    
    scanf("%i %i %i", &primeiroValor, &segundoValor, &terceiroValor);

    maiorValor = (primeiroValor + segundoValor + abs(primeiroValor - segundoValor)) / 2;
    maiorValor = (maiorValor + terceiroValor + abs(maiorValor - terceiroValor)) / 2;
    
    printf("%i eh o maior\n", maiorValor);

    return 0;
}