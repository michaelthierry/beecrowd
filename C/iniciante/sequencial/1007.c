/**
 * @file 1007.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1007 - Diferença
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // varaiaveis
    int primeiroValor, segundoValor, terceiroValor, quartoValor, diferenca;
    // lendo do usuario
    scanf("%i", &primeiroValor);
    scanf("%i", &segundoValor);
    scanf("%i", &terceiroValor);
    scanf("%i", &quartoValor);
    // calculando
    diferenca = ((primeiroValor * segundoValor) - (terceiroValor * quartoValor));
    // exibindo resultado
    printf("DIFERENCA = %i\n", diferenca);
    // fim
    return 0;
}