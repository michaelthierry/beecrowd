/**
 * @file 1113.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Crescente e Decrescente
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    while(1) {
        int primeiroValor, segundoValor;
        scanf("%i %i", &primeiroValor, &segundoValor);
        if(primeiroValor == segundoValor) {
            break;
        } else if(primeiroValor < segundoValor) {
            printf("Crescente\n");
        } else {
            printf("Descrescente\n");
        }
    }
    return 0;
}