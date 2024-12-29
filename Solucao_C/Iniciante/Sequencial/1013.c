/**
 * @file 1013.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1013 - O maior
 * @version 0.1
 * @date 2024-12-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <stdlib.h>

int main() {
    // declarando variaveis
    int valorA, valorB, valorC, maior;
    // lendo do usuario
    scanf("%d %d %d", &valorA, &valorB, &valorC);
    // calculando o maior
    maior = ((valorA + valorB) + abs(valorA - valorB)) / 2;
    maior = ((valorC + maior) + abs(valorC - maior)) / 2;
    // exibindo resultado
    printf("%d eh o maior\n", maior);
    // fim
    return 0;
}