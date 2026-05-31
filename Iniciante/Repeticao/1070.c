/**
 * @file 1070.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Seis números impares
 * @version 0.1
 * @date 2026-05-31
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int valor;

    scanf("%d", &valor);

    if((valor % 2) == 0) {
        valor++;
    }

    printf("%d\n", valor);

    for(int indice = 1; indice <= 5; indice++) {
        printf("%d\n", valor += 2);
    }
    
    return 0;
}