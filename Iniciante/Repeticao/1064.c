/**
 * @file 1064.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Positivos e Media
 * @version 0.1
 * @date 2026-05-30
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    double valor, soma = 0, media;
    int quantidade = 0;

    for(int indice = 1; indice <= 6; indice++) {
        scanf("%lf", &valor);
        if(valor >= 0) {
            quantidade++;
            soma += valor;
        }
    }

    media = soma / quantidade;

    printf(
        "%d valores positivos\n"
        "%.1lf\n",
        quantidade,
        media
    );
        
    return 0;
}