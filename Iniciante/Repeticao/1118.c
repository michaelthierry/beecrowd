/**
 * @file 1118.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Varias Notas com Validação
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int opcao;
    do {
        int quantidade = 0;
        double soma = 0, media = 0;
        while(quantidade < 2) {
            double nota;
            scanf("%lf", &nota);
            if((nota >= 0.00) && (nota <=10.00)) {
                quantidade++;
                soma += nota;
            } else {
                printf("nota invalida\n");
            }
        }
        media = soma / 2.00;
        printf("media = %.2lf\n", media);
        do {
            printf("novo calculo (1-sim 2-nao)\n");
            scanf("%d", &opcao);
        }while((opcao != 1) && (opcao != 2));
    } while(opcao != 2);
    return 0;
}