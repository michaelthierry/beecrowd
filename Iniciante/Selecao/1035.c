/**
 * @file 1035.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Teste de seleção 1
 * @version 0.1
 * @date 2025-10-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {

    int valorA, valorB, valorC, valorD;
    
    scanf("%i %i %i %i", &valorA, &valorB, &valorC, &valorD);
    
    if((valorB > valorC) && (valorD > valorA)) {
        
        if((valorC + valorD) > (valorA + valorB)) {

            if((valorC > 0) && (valorD > 0)) {

                if((valorA % 2) == 0) {

                    printf("Valores aceitos\n");
                    
                    return 0;
                } 
            }
        }
    }
    
    printf("Valores nao aceitos\n");

    return 0;
}