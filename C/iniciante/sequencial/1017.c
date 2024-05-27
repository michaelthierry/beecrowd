/**
 * @file 1017.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1017 - Gasto de combustivel
 * @version 0.1
 * @date 2024-05-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    int tempoGasto, velocidadeMedia;
    double combustivel;
    // lendo do usuario;
    scanf("%i", &tempoGasto);
    scanf("%i", &velocidadeMedia);
    // calculando
    combustivel = (tempoGasto * velocidadeMedia) / 12.0;
    // exibindo resultado
    printf("%.3lf\n", combustivel);
    // fim
    return 0;
}