/**
 * @file 1047.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1047 - Tempo de jogo com minutos
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int horaInicial, minutosIniciais, horaFinal, minutosFinais, horasTotais, minutosTotais;
    // recebe
    scanf("%d %d %d %d", &horaInicial, &minutosIniciais, &horaFinal, &minutosFinais);
    // verificando as horas
    if(horaFinal == horaInicial) {
        
        if(minutosIniciais == minutosFinais) {
            // exibe
            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        }else if(minutosIniciais > minutosFinais) {
            // calculando
            minutosTotais = (60 - minutosIniciais) + minutosFinais;
            // exibe
            printf("O JOGO DUROU 23 HORA(S) E %i MINUTO(S)\n", minutosTotais);
        }else {
            // calculando
            horasTotais = horaFinal - horaInicial;
            minutosTotais = minutosFinais - minutosIniciais;
            // exibe
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horasTotais, minutosTotais);
        }
        
    }else if(horaInicial > horaFinal) {
        
        horasTotais = (24 - horaInicial) + horaFinal;

        if(minutosIniciais == minutosFinais) {
            // exibe
            printf("O JOGO DUROU %i HORA(S) E 0 MINUTO(S)\n", horasTotais);
        }else if(minutosIniciais > minutosFinais) {
            // calculando
            horasTotais -= 1;
            minutosTotais = (60 + minutosFinais) - minutosIniciais;
            // exibe
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",horasTotais, minutosTotais);
        }else {
            // calculando
            minutosTotais = minutosFinais - minutosIniciais;
            // exibe
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horasTotais, minutosTotais);
        }
    }else {

        // calculando
        horasTotais = horaFinal - horaInicial;

        if(minutosIniciais == minutosFinais) {
            // exibe
            printf("O JOGO DUROU %i HORA(S) E 0 MINUTO(S)\n", horasTotais);

        }else if(minutosIniciais > minutosFinais) {
            // calculando
            horasTotais -= 1;
            minutosTotais = (60 - minutosIniciais) + minutosFinais;
            // exibe
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",horasTotais, minutosTotais);

        }else {
            // calculando
            minutosTotais = minutosFinais - minutosIniciais;
            // exibe
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horasTotais, minutosTotais);
        }
    }
    // fim
    return 0;
}