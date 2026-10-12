/**
 * @file 1165.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Numero Primo
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
        int numero, valores = 1, contador = 0;
        scanf("%d", &numero);
        while(valores < 10000000) {
            if((numero % valores) == 0) {
                contador++;
                valores++;
            } else {
                valores++;
            }
            if(contador > 2) {
                printf("%d nao eh primo\n", numero);
                break;
            }
        }
        if(contador == 2) {
            printf("%d eh primo\n", numero);
        } 
        quantidadeTestes--;
    }
    return 0;
}