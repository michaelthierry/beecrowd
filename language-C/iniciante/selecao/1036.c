/**
 * @file 1036.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Formula de Bhaskara
 * @version 0.1
 * @date 2025-10-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>

int main() {

    double valorA, valorB, valorC, delta; 

    scanf("%lf %lf %lf", &valorA, &valorB, &valorC);
    
    delta = (valorB * valorB) - 4 * valorA * valorC;
    
    if((delta < 0) || (valorA == 0)) {

        printf("Impossivel calcular\n");

    } else {
        
        double x1, x2, raiz;
        
        raiz = sqrt(delta);
        x1 = (-valorB + raiz) / (2.0 * valorA);
        x2 = (-valorB - raiz) / (2.0 * valorA);
        
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }

    return 0;
}