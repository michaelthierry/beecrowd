/**
 * @file 1132.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Multiplos de 13
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int limiteInferior, limiteSuperior, soma = 0;
    scanf("%i", &limiteInferior);
    scanf("%i", &limiteSuperior);
    if(limiteInferior > limiteSuperior) {
        int auxiliar = limiteInferior;
        limiteInferior = limiteSuperior;
        limiteSuperior = auxiliar;
    }
    while(limiteInferior <= limiteSuperior) {
        if((limiteInferior % 13) != 0) {
            soma += limiteInferior;
        }
        limiteInferior++;
    }
    printf("%d\n", soma);
    return 0;
}