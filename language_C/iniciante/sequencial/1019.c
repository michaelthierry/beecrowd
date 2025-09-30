/**
 * @file 1019.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Conversao de Tempo
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main(){
    
    int segundosTotais, horas,minutos, segundos;
    
    scanf("%i", &segundosTotais);

    horas = segundosTotais / 3600;
    minutos = (segundosTotais - (3600 * horas)) / 60;
    segundos = (segundosTotais - (3600 * horas)) - (minutos * 60);

    printf("%i:%i:%i\n", horas, minutos, segundos);
    
    return 0;
}
