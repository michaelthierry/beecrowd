/**
 * @file 1042.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1042 - Sort simples
 * @version 0.1
 * @date 2025-01-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int valorA, valorB, valorC;
    // lendo do usuario
    scanf("%d %d %d", &valorA, &valorB, &valorC);
    // verificando
    if(valorA > valorB) {
        
        if(valorA > valorC) {
            
            if(valorB > valorC) {
                // exibe
                printf("%d\n%d\n%d\n", valorC, valorB, valorA);
            }else {
                // exibe
                printf("%d\n%d\n%d\n", valorB, valorC, valorA);
            }
        }else {
            // exibe
            printf("%d\n%d\n%d\n", valorB, valorA, valorC);
        }
    }else {
        
        if(valorB > valorC) {

            if(valorA > valorC) {
                // exibe
                printf("%d\n%d\n%d\n", valorC, valorA, valorB);
            }else {
                // exibe
                printf("%d\n%d\n%d\n", valorA, valorC, valorB);
            }
        }else {
            // exibe
            printf("%d\n%d\n%d\n", valorC, valorB, valorA);
        }
    }
    printf("\n%d\n%d\n%d\n", valorA, valorB, valorC);
    // fim
    return 0;
}