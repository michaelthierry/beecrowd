/**
 * @file 1164.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Numero Perfeito
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidadeTestes;
    scanf("%d", &quantidadeTestes);
    while(quantidadeTestes > 0) {
        int numero, somaDivisores = 0, contador = 1;
        scanf("%d", &numero);
        while(contador < numero) {
            if((numero % contador) == 0) {
                somaDivisores = (somaDivisores + contador);
                contador++;
            } else {
                contador++;
            }
        }
        if(somaDivisores == numero) {
            printf("%d eh perfeito\n", numero);
        } else {
            printf("%d nao eh perfeito\n", numero);
        }
        quantidadeTestes--;
    }
    return 0;
}