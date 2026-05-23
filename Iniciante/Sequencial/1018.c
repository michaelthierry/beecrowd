/**
 * @file 1018.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Cedulas
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main() {
    
    int saldo, notas100, notas50, notas20, notas10, notas5, notas2, notas1;
    
    scanf("%i", &saldo);
    
    printf("%i\n", saldo);
    
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
    
    printf("%i nota(s) de R$ 100,00\n" 
           "%i nota(s) de R$ 50,00\n"
           "%i nota(s) de R$ 20,00\n"
           "%i nota(s) de R$ 10,00\n"
           "%i nota(s) de R$ 5,00\n"
           "%i nota(s) de R$ 2,00\n"
           "%i nota(s) de R$ 1,00\n", 
    notas100, notas50, notas20, notas10, notas5, notas2, notas1);

    return 0;
}