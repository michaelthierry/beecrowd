/**
 * @file 1117.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Validação de Nota
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade = 0;
    double media, soma = 0;
    while(1) {
        double nota, media;
        if(quantidade == 2) {
            break;
        }
        scanf("%lf", &nota);
        if((nota >= 0) && (nota <= 10)) {
            quantidade++;
            soma += nota;
        } else {
            printf("nota invalida\n");
        }
    }
    media = soma / 2.00;
    printf("media = %.2lf\n", media);
    return 0;
}