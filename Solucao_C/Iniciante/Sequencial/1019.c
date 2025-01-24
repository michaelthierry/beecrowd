/**
 * @file 1019.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1019 - Conversão de Tempo
 * @version 0.1
 * @date 2025-01-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    // variveis
    int horas, minutos, segundos;
    // lendo do usuario
    scanf("%d", &segundos);
    // calculando as horas
    horas = segundos / 3600;
    segundos -=  (horas * 3600);
    minutos = segundos / 60;
    segundos -= (minutos * 60);
    // exibindo resultado
    printf("%d:%d:%d\n", horas, minutos, segundos);
    // fim
    return 0;
}