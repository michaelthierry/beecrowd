/**
 * @file 1080.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Maior e Posição
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int valor, posicao = 0, maior = 0;
    for(int indice = 1; indice <= 10; indice++) {
        scanf("%i", &valor);
        if(valor > maior) {
            maior = valor;
            posicao = indice;
        }
    }
    printf("%i\n%i\n", maior, posicao);
    return 0;
}