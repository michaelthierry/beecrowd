/**
 * @file 1145.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequência Logica 2
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidadeNumeros, quantidade, controle = 0;
    scanf("%d %d", &quantidadeNumeros, &quantidade);
    for(int indice = 1; indice <= quantidade; indice++) {
        controle++;
        if(controle == quantidadeNumeros) {
            printf("%d\n", indice);
            controle = 0;
        } else {
            printf("%d ", indice);
        }
    }
    return 0;
}