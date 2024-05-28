/**
 * @file 1019.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1019 - Conversão de tempo
 * @version 0.1
 * @date 2024-05-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    int segundosTotais, horas,minutos, segundos;
    // lendo do usuario
    scanf("%i", &segundosTotais);
    // calculando o tempo
    horas = segundosTotais / 3600;
    minutos = (segundosTotais - (3600 * horas)) / 60;
    segundos = (segundosTotais - (3600 * horas)) - (minutos * 60);
    // exibindo resultado
    printf("%i:%i:%i\n", horas, minutos, segundos);
    // fim
    return 0;
}