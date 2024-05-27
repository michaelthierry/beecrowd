/**
 * @file 1016.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1016 - Distancia
 * @version 0.1
 * @date 2024-05-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    int distanciaKm, minutos;
    // lendo do usuario
    scanf("%i", &distanciaKm);
    // calculando o tempo
    minutos = distanciaKm * 2;
    // exibindo resultado
    printf("%i minutos\n", minutos);
    // fim
    return 0;
}