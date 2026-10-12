/**
 * @file 1156.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequencia II
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    double somaSequencia = 1.0, numerador, denominador;
    int iterador = 1;
    while(iterador < 20) {
        int indice = 0.0;
        numerador = (2.0 * iterador) + 1.0;
        denominador = 1.0;
        while(indice < iterador) {
            denominador *= 2;
            indice++;
        }
        somaSequencia += numerador / denominador;
        iterador++;
    }
    printf("%.2lf\n", somaSequencia);
    return 0;
}
