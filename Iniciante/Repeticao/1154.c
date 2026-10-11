/**
 * @file 1154.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Idades
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int idade = 0, soma = 0, contador = 0;
    double media;
    while(idade >= 0) {
        scanf("%i", &idade);
        if(idade < 0) { 
            break;
        } else {
            soma += idade;
            contador++;
        }
    }
    media = (double) soma / contador;
    printf("%.2lf\n", media);
    return 0;
}