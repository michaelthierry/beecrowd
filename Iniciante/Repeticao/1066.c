/**
 * @file 1066.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Pares, Impares, Positivos e Negativos
 * @version 0.1
 * @date 2026-05-30
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int valor, pares = 0, impares = 0, positivos = 0, negativos = 0;

    for(int indice = 1; indice <= 5; indice++) {
        scanf("%d", &valor);
        if((valor % 2) == 0) {
            pares++;
        }
        if(((valor % 2) == 1) || ((valor % 2) == -1)) {
            impares++;
        }
        if(valor > 0) {
            positivos++;
        }
        if(valor < 0) {
            negativos++;
        }
    }

    printf(
        "%i valor(es) par(es)\n"
        "%i valor(es) impar(es)\n"
        "%i valor(es) positivo(s)\n"
        "%i valor(es) negativo(s)\n", 
        pares, impares, positivos, negativos
    );

    return 0;
}