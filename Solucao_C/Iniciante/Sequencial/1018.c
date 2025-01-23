/**
 * @file 1018.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1018 - Cedulas
 * @version 0.1
 * @date 2025-01-22
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int notas100, notas50, notas20, notas10, notas5, notas2, notas1, valor, auxiliar;
    // lendo do usuario
    scanf("%d", &valor);
    // calculando as notas
    auxiliar = valor;
    notas100 = auxiliar / 100;
    auxiliar %= 100;
    notas50 = auxiliar / 50;
    auxiliar %= 50;
    notas20 = auxiliar / 20;
    auxiliar %= 20;
    notas10 = auxiliar / 10;
    auxiliar %= 10;
    notas5 = auxiliar / 5;
    auxiliar %= 5;
    notas2 = auxiliar / 2;
    auxiliar %= 2;
    notas1 = auxiliar;
    // exibindo resultado
    printf("%d\n"
           "%d nota(s) de R$ 100,00\n"
           "%d nota(s) de R$ 50,00\n"
           "%d nota(s) de R$ 20,00\n"
           "%d nota(s) de R$ 10,00\n"
           "%d nota(s) de R$ 5,00\n"
           "%d nota(s) de R$ 2,00\n"
           "%d nota(s) de R$ 1,00\n",
        valor, notas100, notas50, notas20, notas10, notas5, notas2, notas1
    );
    // fim
    return 0;
}