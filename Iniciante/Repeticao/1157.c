/**
 * @file 1157.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Divisores I
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int numero, valor = 1;
    scanf("%d", &numero);
    while(valor <= numero) {
        if((numero % valor) == 0) {
            printf("%d\n", valor);
        }
        valor++;
    }
    return 0;
}