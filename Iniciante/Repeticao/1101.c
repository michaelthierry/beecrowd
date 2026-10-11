/**
 * @file 1101.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequencia de Números e Soma
 * @version 0.1
 * @date 2026-10-04
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>
int main() {
    
    while(1) {
        int soma = 0;
        int limiteInferior, limiteSuperior;
        scanf("%i %i", &limiteInferior, &limiteSuperior);
        if((limiteInferior == 0) || (limiteSuperior == 0)) {
            break;
        }
        if(limiteInferior > limiteSuperior) {
            int auxiliar = limiteInferior;
            limiteInferior = limiteSuperior;
            limiteSuperior = auxiliar;  
        }
        for(int indice = limiteInferior; indice <= limiteSuperior; indice++) {
            printf("%i ", indice);
            soma += indice;
        }
        printf("Sum=%i\n", soma);
    }
    return 0;
}