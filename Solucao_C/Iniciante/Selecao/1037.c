/**
 * @file 1037.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1037 - Intervalo
 * @version 0.1
 * @date 2025-01-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variavel
    double valor;
    // lendo do usuario
    scanf("%lf", &valor);
    // selecionando
    if((valor >= 0.0) && (valor <= 25.0)) {
        // exibe
        printf("Intervalo [0,25]\n");
    } else if((valor > 25.0) && (valor <= 50.0)) {
        // exibe
        printf("Intervalo (25,50]\n");
    } else if((valor > 50.0) && (valor <= 75.0)) {
        // exibe
        printf("Intervalo (50,75]\n");
    } else if((valor > 75.0) && (valor <= 100.0)) {
        // exibe
        printf("Intervalo (75,100]\n");
    } else {
        printf("Fora de intervalo\n");
    }
    // fim
    return 0;
}