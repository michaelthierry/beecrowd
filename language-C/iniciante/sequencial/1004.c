/**
 * @file 1004.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Produto Simples
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    
    int primeiroValor, segundoValor, produto;
    
    scanf("%i", &primeiroValor);
    scanf("%i", &segundoValor);

    produto = (primeiroValor * segundoValor);
    
    printf("PROD = %i\n", produto);
 
    return 0;
}
