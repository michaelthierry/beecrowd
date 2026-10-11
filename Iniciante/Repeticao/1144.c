/**
 * @file 1144.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequência Lógica
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade, numero = 1;
    scanf("%d", &quantidade);
    while(quantidade > 0) {
        int quadrado = numero * numero;
        int cubo = numero * numero * numero;
        printf(
            "%d %d %d\n"
            "%d %d %d\n", 
            numero, quadrado, cubo,
            numero, (quadrado + 1), (cubo + 1)
        );
        numero++;
        quantidade--;
    }
    return 0;
}