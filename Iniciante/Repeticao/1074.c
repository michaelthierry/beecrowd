/**
 * @file 1074.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Par ou Impar
 * @version 0.1
 * @date 2026-10-03
 *
 * @copyright Copyright (c) 2026
 *
 */

#include <stdio.h>
int main() {
    int quantidade, valor;
    scanf("%i", &quantidade);
    while (quantidade > 0) {
        scanf("%i", &valor);
        if (valor == 0) {
            printf("NULL\n");
        }
        else if (valor % 2 == 0) {
            if (valor > 0) {
                printf("EVEN POSITIVE\n");
            } else {
                printf("EVEN NEGATIVE\n");
            }
        } else {
            if (valor > 0) {
                printf("ODD POSITIVE\n");
            } else {
                printf("ODD NEGATIVE\n");
            }
        }
        quantidade--;
    }
    return 0;
}