/**
 * @file 1151.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Fibonacci Facil
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main(){
    int termo = 0, atual = 1, quantidade, anterior;
    scanf("%i", &quantidade);
    while(quantidade > 1) {
        if(termo < 1) {
            printf("%i ", termo);
            anterior = 0;
            termo++;
        } else {
            printf("%i ", termo);
            termo = anterior + atual;
            anterior = atual;
            atual = termo;
        }
        quantidade--;
    } 
    printf("%i\n", termo);
    return 0;
}