/**
 * @file 1035.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1035 - Teste de Seleção 1
 * @version 0.1
 * @date 2025-01-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int valorA, valorB, valorC, valorD;
    // lendo do usuario
    scanf("%d %d %d %d", &valorA, &valorB, &valorC, &valorD);
    // selecionando
    if((valorB > valorC) && (valorD > valorA)) {
        
        if((valorC + valorD) > (valorA + valorB)) {

            if((valorC > 0) && (valorD > 0)) {

                if((valorA % 2) == 0){
                    // exibe resultado
                    printf("Valores aceitos\n");
                    // fim
                    return 0;
                }
            }
        }
    }
    // exibe resultado
    printf("Valores nao aceitos\n");
    // fim
    return 0;
}