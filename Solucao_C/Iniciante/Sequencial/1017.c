/**
 * @file 1017.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1017 - Gasto de Combustivel
 * @version 0.1
 * @date 2025-01-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variveis
    int tempoGasto, velocidadeMedia, distancia;
    double  litros;
    // lendo do usuário
    scanf("%d %d", &tempoGasto, &velocidadeMedia);
    // calculando
    distancia = tempoGasto * velocidadeMedia;
    litros = distancia / 12.0;
    // exibindo resultado
    printf("%.3lf\n", litros);
    // fim
    return 0;
}