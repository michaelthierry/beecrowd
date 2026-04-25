/**
 * @file 1014.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Consumo
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int distanciaPercorrida;
    double litroCombustivel, consumo;

    scanf("%i", &distanciaPercorrida);
    scanf("%lf", &litroCombustivel);
    
    consumo = distanciaPercorrida / litroCombustivel;
    
    printf("%.3lf km/l\n", consumo);
    
    return 0;
}