/**
 * @file 1017.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Gasto de Combustivel
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){
    
    int tempoGasto, velocidadeMedia;
    double combustivel;
    
    scanf("%i", &tempoGasto);
    scanf("%i", &velocidadeMedia);
    
    combustivel = (tempoGasto * velocidadeMedia) / 12.0;
    
    printf("%.3lf\n", combustivel);
    
    return 0;
}