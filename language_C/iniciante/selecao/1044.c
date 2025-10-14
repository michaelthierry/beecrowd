/**
 * @file 1044.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Multiplos
 * @version 0.1
 * @date 2025-10-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main(){
    
    int primeiroValor, segundoValor;
    
    scanf("%i %i", &primeiroValor, &segundoValor);
    
    if ((primeiroValor % segundoValor) == 0 || (segundoValor % primeiroValor) == 0) {    
        printf("Sao Multiplos\n");

    } else {
        printf("Nao sao Multiplos\n");
    
    }
    
    return 0;
}