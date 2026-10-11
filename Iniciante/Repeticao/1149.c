/**
 * @file 1149.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Somando Inteiros Consecutivos
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int valor, quantidade, soma = 0;
    scanf("%i %i", &valor, &quantidade);
    while(quantidade <= 0) {
        scanf("%i", &quantidade);
    }
    for(int indice = 0; indice <= quantidade - 1; indice++) {
        soma += (valor + indice);
    }
    printf("%d\n", soma);
    return 0;
}