/**
 * @file 1047.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Tempo de jogo com minutos
 * @version 0.1
 * @date 2025-10-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    
    int horaInicial, minutosIniciais, horaFinal, minutosFinais, horasTotais, minutosTotais;
    
    scanf("%d %d %d %d", &horaInicial, &minutosIniciais, &horaFinal, &minutosFinais);
    
    if(horaFinal == horaInicial) {
        
        if(minutosIniciais == minutosFinais) {

            printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
        } else if(minutosIniciais > minutosFinais) {
            
            minutosTotais = (60 - minutosIniciais) + minutosFinais;
            
            printf("O JOGO DUROU 23 HORA(S) E %i MINUTO(S)\n", minutosTotais);
        } else {
            
            horasTotais = horaFinal - horaInicial;
            minutosTotais = minutosFinais - minutosIniciais;
            
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horasTotais, minutosTotais);
        }
        
    } else if(horaInicial > horaFinal) {
        
        horasTotais = (24 - horaInicial) + horaFinal;

        if(minutosIniciais == minutosFinais) {
            
            printf("O JOGO DUROU %i HORA(S) E 0 MINUTO(S)\n", horasTotais);
        } else if(minutosIniciais > minutosFinais) {
            
            horasTotais -= 1;
            minutosTotais = (60 + minutosFinais) - minutosIniciais;
            
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",horasTotais, minutosTotais);
        } else {
            
            minutosTotais = minutosFinais - minutosIniciais;
            
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horasTotais, minutosTotais);
        }
    } else {

        horasTotais = horaFinal - horaInicial;

        if(minutosIniciais == minutosFinais) {

            printf("O JOGO DUROU %i HORA(S) E 0 MINUTO(S)\n", horasTotais);

        } else if(minutosIniciais > minutosFinais) {
            
            horasTotais -= 1;
            minutosTotais = (60 - minutosIniciais) + minutosFinais;
            
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n",horasTotais, minutosTotais);

        } else {
            
            minutosTotais = minutosFinais - minutosIniciais;
            
            printf("O JOGO DUROU %i HORA(S) E %i MINUTO(S)\n", horasTotais, minutosTotais);
        }
    }
    
    return 0;
}