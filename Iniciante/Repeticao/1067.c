/**
 * @file 1067.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Números Impares
 * @version 0.1
 * @date 2026-05-31
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int valor, quantidade;
    
    scanf("%d", &quantidade);

    for(int indice = 0; indice <= quantidade; indice++) {
        if((indice % 2) == 1) {
            printf("%d\n", indice);
        }
    }
    
    return 0;
}