/**
 * @file 1158.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Soma de Impares Consecutivos III
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade;
    scanf("%d", &quantidade);
    while(quantidade != 0) {
        int partida, quantidadeImpares, contador = 0, soma = 0;
        scanf("%d %d", &partida, &quantidadeImpares);
        while(contador < quantidadeImpares) {
            if((partida % 2) != 0) {
                soma += partida;
                partida += 2;
                contador++;
            } else {
                partida++;
            }
        }
        printf("%d\n", soma);
        quantidade--;
    }
    return 0;
}