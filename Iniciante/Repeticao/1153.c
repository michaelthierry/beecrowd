/**
 * @file 1153.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Fatorial Simples
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int valor, fatorial;
    scanf("%i", &valor);
    fatorial = valor;
    while(valor != 1) {
        fatorial *= (valor - 1);
        valor--;
    }
    printf("%d\n", fatorial);
    return 0;
}