/**
 * @file 1037.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Intervalo
 * @version 0.1
 * @date 2025-10-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    
    double valor;
    
    scanf("%lf", &valor);
    
    if((valor >= 0.0) && (valor <= 25.0)) {

        printf("Intervalo [0,25]\n");

    } else if((valor > 25.0) && (valor <= 50.0)) {
        
        printf("Intervalo (25,50]\n");

    } else if((valor > 50.0) && (valor <= 75.0)) {
        
        printf("Intervalo (50,75]\n");

    } else if((valor > 75.0) && (valor <= 100.0)) {
        
        printf("Intervalo (75,100]\n");

    } else {

        printf("Fora de intervalo\n");
    
    }
    
    return 0;
}