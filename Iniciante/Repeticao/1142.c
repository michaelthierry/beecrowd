/**
 * @file 1142.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief PUM
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade, limiteInferior = 1, limiteSuperior = 4;
    scanf("%d", &quantidade);
    while(quantidade > 0) {
        for(int indice = limiteInferior; indice <= limiteSuperior; indice++) {
            if((indice % 4) == 0) {
                printf("PUM\n");
            } else {
                printf("%d ", indice);
            }
        }
        limiteInferior += 4;
        limiteSuperior += 4;
        quantidade--;
    }
    return 0;
}