/**
 * @file 1036.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1036 - Fórmula de Baskara
 * @version 0.1
 * @date 2025-01-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {
    // variaveis
    double valorA, valorB, valorC, delta;
    // lendo do usuario
    scanf("%lf %lf %lf", &valorA, &valorB, &valorC);
    // calculando delta
    delta = (valorB * valorB) - (4 * valorA * valorC);
    // selecionando
    if((delta < 0) || (valorA == 0)) {
        // exibe resultado
        printf("Impossivel calcular\n");
    }else{
        // variveis
        double x1, x2, raizDelta;
        // calculando raizes
        raizDelta = sqrt(delta);
        x1 = (-valorB + raizDelta) / (2.0 * valorA);
        x2 = (-valorB - raizDelta) / (2.0 * valorA);
        // exibndo resultado
        printf(
            "R1 = %.5lf\n"
            "R2 = %.5lf\n",
            x1, x2
        );
    }
    // fim
    return 0;
}