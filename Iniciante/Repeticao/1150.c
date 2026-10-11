/**
 * @file 1150.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Ultrapassando Z
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int valorA, valorB, contador, soma = 0;
    scanf("%i", &valorA);
    scanf("%i", &valorB);
    while(valorB <= valorA) {
        scanf("%i", &valorB);
    }
    soma = valorA;
    contador = 1;
    while(soma <= valorB) {
        soma += valorA + contador;
        contador++;
    }
    printf("%i\n", contador);
    return 0;
}