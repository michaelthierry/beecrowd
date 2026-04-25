/**
 * @file 1041.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Coordenadas de um ponto
 * @version 0.1
 * @date 2025-10-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    
    double x, y;
    
    scanf("%lf %lf", &x, &y);
    
    if(x > 0) {

        if(y > 0) {  
            printf("Q1\n");

        } else if(y < 0) {
            printf("Q4\n");

        } else {
            printf("Eixo X\n");

        }
    } else if(x < 0) {

        if(y > 0) {
            printf("Q2\n");

        } else if(y < 0) {
            printf("Q3\n");

        } else {
            printf("Eixo X\n");
        }
    } else if(x == 0) {
        
        if((y > 0) || (y < 0)) {
            printf("Eixo Y\n");

        } else {
            printf("Origem\n");
        }
    }

    return 0;
}