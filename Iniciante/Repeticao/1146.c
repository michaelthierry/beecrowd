/**
 * @file 1146.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequência Crescentes
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int valor = 1;
    while(valor != 0) {
        scanf("%i", &valor);
        for(int indice = 1; indice <= valor; indice++) {
            if(indice == valor) {
                printf("%d\n", indice);
            } else {
                printf("%d ", indice);
            }
        }
    }
    return 0;
}