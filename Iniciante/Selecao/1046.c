/**
 * @file 1046.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Tempo de Jogo
 * @version 0.1
 * @date 2025-10-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {

    int horaInicial, horaFinal, horasTotais = 0;
    
    scanf("%i %i", &horaInicial, &horaFinal);

    if(horaInicial == horaFinal) {
        
        horasTotais = 24;
        printf("O JOGO DUROU %d HORA(S)\n", horasTotais);

    } else if(horaInicial < horaFinal) {
        
        horasTotais = horaFinal - horaInicial;
        printf("O JOGO DUROU %d HORA(S)\n",horasTotais);

    } else {
        
        horasTotais = (24 - horaInicial) + horaFinal;
        printf("O JOGO DUROU %d HORA(S)\n", horasTotais);
    }
    
    return 0;
}