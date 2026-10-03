/**
 * @file 1075.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Resto 2
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int divisor;
    scanf("%i", &divisor);
    for(int indice = 1; indice < 10000; indice++) {
        if((indice % divisor) == 2) {
            printf("%i\n", indice);
        }
    }
    return 0;
}