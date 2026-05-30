/**
 * @file 1060.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Números positivos
 * @version 0.1
 * @date 2026-05-30
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int contador, quantidade = 0;
    float valor;

    for(contador = 1; contador <= 6; contador++) {
        scanf("%f", &valor);
        if(valor > 0) {
            quantidade++;
        }
    }

    printf("%d valores positivos\n", quantidade);

    return 0;
}