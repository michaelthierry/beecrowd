/**
 * @file 1018.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1018 - Cédulas
 * @version 0.1
 * @date 2024-05-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    int saldo, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    // lendo do usuario
    scanf("%i", &saldo);
    // exibindo o resultado
    printf("%i\n", saldo);
    // calculando as cédulas
    notas100 = saldo / 100;
    saldo %= 100;
    notas50 = saldo / 50;
    saldo %= 50;
    notas20 = saldo / 20;
    saldo %= 20;
    notas10 = saldo / 10;
    saldo %= 10;
    notas5 = saldo / 5;
    saldo %= 5;
    notas2 = saldo / 2;
    saldo %= 2;
    notas1 = saldo / 1;
    // exibindo os resultados
    printf("%i nota(s) de R$ 100,00\n", notas100);
    printf("%i nota(s) de R$ 50,00\n", notas50);
    printf("%i nota(s) de R$ 20,00\n", notas20);
    printf("%i nota(s) de R$ 10,00\n", notas10);
    printf("%i nota(s) de R$ 5,00\n", notas5);
    printf("%i nota(s) de R$ 2,00\n", notas2);
    printf("%i nota(s) de R$ 1,00\n", notas1);
    // fim
    return 0;
}