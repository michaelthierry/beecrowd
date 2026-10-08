/**
 * @file 1099.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Soma de Impares Consecutivos II
 * @version 0.1
 * @date 2026-10-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade;
    scanf("%i", &quantidade);
    while(quantidade > 0) {
        int limiteInferior, limiteSuperior;
        scanf("%i %i", &limiteInferior, &limiteSuperior);
        if(limiteInferior > limiteSuperior) {
            int auxiliar = limiteSuperior;
            limiteSuperior = limiteInferior;
            limiteInferior = auxiliar;
        }
        int soma = 0;
        limiteInferior++;
        while(limiteInferior < limiteSuperior) {
            if((limiteInferior % 2) == 1 || (limiteInferior % 2) == -1) {
                soma += limiteInferior;
            }
            limiteInferior++;
        }
        printf("%i\n", soma);
        quantidade--;
    }   
    return 0;
}