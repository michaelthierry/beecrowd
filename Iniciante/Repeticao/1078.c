/**
 * @file 1078.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Tabuada
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int valor;
    scanf("%i", &valor);
    for(int indice = 1; indice < 11; indice++) {
        int produto = indice * valor;
        printf("%i x %i = %i\n", indice, valor, produto);
    }
    return 0;
}