/**
 * @file 1072.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Intervalo 2
 * @version 0.1
 * @date 2026-05-31
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int quantidade, valor, somaDentro = 0, somaFora = 0;

    scanf("%d", &quantidade);

    for(int indice = 0; indice < quantidade; indice++) {
        scanf("%d", &valor);
        
        if((valor >= 10)  && (valor <= 20)) {
            somaDentro++;
        } else {
            somaFora++;
        }
    }

    printf("%i in\n", somaDentro);
    printf("%i out\n", somaFora);

    return 0;
}