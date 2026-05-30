/**
 * @file 1065.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Pares entre cinco
 * @version 0.1
 * @date 2026-05-30
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int valor, quantidade = 0;

    for(int indice = 1; indice <= 5; indice++) {
        scanf("%i", &valor);
        if((valor % 2) == 0) {
            quantidade++;
        }
    }

    printf("%i valores pares\n", quantidade);

    return 0;
}