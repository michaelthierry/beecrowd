/**
 * @file 1046.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1046 - Tempo de jogo 
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int horaInicial, horaFinal;
    // recebe
    scanf("%d %d", &horaInicial, &horaFinal);
    // verificando as horas
    if(horaFinal == horaInicial) {
        // exibe
        printf("O JOGO DUROU 24 HORA(S)\n");
    }else if(horaInicial < horaFinal) {
        // exibe
        printf("O JOGO DUROU %d HORA(S)\n", (horaFinal - horaInicial));
    }else {
        // exibe
        printf("O JOGO DUROU %d HORA(S)\n", ((24 - horaInicial) + horaFinal));
    }
    // fim
    return 0;
}