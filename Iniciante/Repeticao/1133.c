/**
 * @file 1133.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Resta da Divisao
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int limiteInferior, limiteSuperior;
    scanf("%d", &limiteInferior);
    scanf("%d", &limiteSuperior);
    if(limiteInferior > limiteSuperior) {
        int auxiliar = limiteInferior;
        limiteInferior = limiteSuperior;
        limiteSuperior = auxiliar;
    }
    limiteInferior++;
    while(limiteInferior < limiteSuperior) {
        if((limiteInferior % 5) == 2) {
            printf("%d\n", limiteInferior);
        } else if((limiteInferior % 5) == 3) {
            printf("%d\n", limiteInferior);
        }
        limiteInferior++;
    }
    return 0;
}