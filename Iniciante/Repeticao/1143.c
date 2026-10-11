/**
 * @file 1143.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Quadrado e ao Cubo
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade, valor = 1;
    scanf("%d", &quantidade);
    while(quantidade > 0) {
        int quadrado, cubo;
        quadrado = valor * valor;
        cubo = valor * valor * valor;
        printf("%d %d %d\n", valor, quadrado, cubo);
        valor++;
        quantidade--;
    }
    return 0;
}