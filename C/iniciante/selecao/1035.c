/**
 * @file 1035.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1035 - Teste de Selecao
 * @version 0.1
 * @date 2024-05-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    int valorA, valorB, valorC, valorD;
    // lendo do usuario
    scanf("%i %i %i %i", &valorA, &valorB, &valorC, &valorD);
    // verificando
    if((valorB > valorC) && (valorD > valorA)){
        
        if((valorC + valorD) > (valorA + valorB)){

            if((valorC > 0) && (valorD > 0)){

                if((valorA % 2) == 0){
                    // exibindo resultado
                    printf("Valores aceitos\n");
                    // fim
                    return 0;
                } 
            }
        }
    }
    // exibindo resultado
    printf("Valores nao aceitos\n");
    // fim
    return 0;
}