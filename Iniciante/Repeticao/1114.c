/**
 * @file 1114.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Senha Fixa
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    while(1) {
        int senha;
        scanf("%i", &senha);
        if(senha != 2002) {
            printf("Senha Invalida\n");
        } else {
            printf("Acesso permitido\n");
            break;
        }
    }
    return 0;
}