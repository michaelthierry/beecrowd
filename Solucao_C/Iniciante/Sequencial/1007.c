/**
 * @file 1007.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1007 - Diferenca
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variaveis
    int primeiroValor, segundoValor, terceiroValor, quartoValor, diferenca;
    // lendo do usuario
    scanf("%d %d %d %d", &primeiroValor, &segundoValor, &terceiroValor, &quartoValor);
    // calculando 
    diferenca = ((primeiroValor * segundoValor) - (terceiroValor * quartoValor));
    // exibindo resultado
    printf("DIFERENCA = %d\n", diferenca);
    // fim
    return 0;
}