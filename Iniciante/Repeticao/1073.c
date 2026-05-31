/**
 * @file 1073.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Quadrado de Pares
 * @version 0.1
 * @date 2026-05-31
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int quantidade, quadrado;

    scanf("%d", &quantidade);
    
    if((quantidade > 5) && (quantidade < 2000)) {
        for(int indice = 1; indice <= quantidade; indice++) {
            if((indice % 2) == 0) {
                quadrado = (indice * indice);
                printf("%d^2 = %d\n", indice, quadrado);
            }
        }
    }
    return 0;
}