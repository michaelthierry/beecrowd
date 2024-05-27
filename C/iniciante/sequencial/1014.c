/**
 * @file 1014.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1014 - Consumo
 * @version 0.1
 * @date 2024-05-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    int distanciaPercorrida;
    double litroCombustivel, consumo;
    // lendo do usuario
    scanf("%i", &distanciaPercorrida);
    scanf("%lf", &litroCombustivel);
    // canculando o consumo
    consumo = distanciaPercorrida / litroCombustivel;
    // exibindo o resultado
    printf("%.3lf km/l\n", consumo);
    // fim
    return 0;
}