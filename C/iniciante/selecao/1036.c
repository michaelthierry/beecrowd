/**
 * @file 1036.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 10136 - Formula de Bhaskara
 * @version 0.1
 * @date 2024-05-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <math.h>

int main(){

    // variaveis
    double valorA, valorB, valorC, delta; 
    // lendo do usuario
    scanf("%lf %lf %lf", &valorA, &valorB, &valorC);
    // calculando delta
    delta = (valorB * valorB) - 4 * valorA * valorC;
    // verificando delta
    if((delta < 0) || (valorA == 0)){
        printf("Impossivel calcular\n");
    }else{
        // variveis
        double x1, x2, raiz;
        // calculando raiz
        raiz = sqrt(delta);
        x1 = (-valorB + raiz) / (2.0 * valorA);
        x2 = (-valorB - raiz) / (2.0 * valorA);
        // exibindo resultado
        printf("R1 = %.5lf\n", x1);
        printf("R2 = %.5lf\n", x2);
    }
    // fim
    return 0;
}