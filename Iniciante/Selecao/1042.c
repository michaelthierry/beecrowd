/**
 * @file 1042.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sort Simples
 * @version 0.1
 * @date 2025-10-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main(){
    
    int valorA, valorB, valorC;
    
    scanf("%i %i %i", &valorA, &valorB, &valorC);

    if(valorA > valorB) {

        if(valorA > valorC) {

            if(valorB > valorC) {
                printf("%i\n%i\n%i\n", valorC, valorB, valorA);

            } else {
                printf("%i\n%i\n%i\n", valorB, valorC, valorA);

            }
        } else {
            printf("%i\n%i\n%i\n", valorB, valorA, valorC);

        }
    } else {

        if(valorB > valorC) {
            
            if(valorA > valorC) {
                printf("%i\n%i\n%i\n", valorC, valorA, valorB);

            } else { 
                printf("%i\n%i\n%i\n", valorA, valorC, valorB);
                
            }
        } else {
            printf("%i\n%i\n%i\n", valorA, valorB, valorC);

        }
    }
    
    printf("\n%i\n%i\n%i\n", valorA, valorB, valorC);

    return 0;
}