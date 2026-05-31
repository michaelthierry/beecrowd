/**
 * @file 1071.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Soma de impares consecutivos
 * @version 0.1
 * @date 2026-05-31
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int valorA, valorB, soma = 0;
    
    scanf("%d %d", &valorA, &valorB);

    if(valorA == valorB) {
        printf("%d\n", soma);

    } else if(valorA < valorB) {
        for(valorA = (valorA + 1); valorA < valorB; valorA++) {
            if((valorA % 2) == 1 || (valorB % 2) == -1) {
                soma += valorA;
            }
        }
        printf("%d\n", soma);

    } else if(valorA > valorB) {
        for(valorB = (valorB + 1); valorB < valorA; valorB++) {
            if((valorB % 2) == 1 || (valorB % 2) == -1) {
                soma += valorB;
            }
        }
        printf("%d\n", soma);
        
    }
    
    return 0;
}