/**
 * @file 1044.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1044 - Múltiplos
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int valorA, valorB;
    // lendo do usuario
    scanf("%d %d", &valorA, &valorB);
    // verifica
    if(((valorA % valorB) == 0) || ((valorB % valorA) == 0)){
        // exibe
        printf("Sao multiplos\n");
    }else {
        // exibe
        printf("Não sao multiplos\n");
    }
    // fim
    return 0;
}