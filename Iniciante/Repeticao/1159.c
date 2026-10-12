/**
 * @file 1159.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Soma de Pares Consecutivos
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int valor;
    while(1) {
        int contador = 0, soma = 0;
        scanf("%d", &valor);
        if(valor == 0) {
            break;
        } 
        while(contador < 5) {
            if((valor % 2) == 0) {
                soma += valor;
                contador++;
                valor += 2;
            } else {
                valor++;
            }
        }
        printf("%d\n", soma);
    }
    return 0;
}