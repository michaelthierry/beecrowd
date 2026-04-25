/**
 * @file 1021.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Notas e Moedas
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */


#include <stdio.h>

int main(){

    int notas, notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas, moedas1, moedas50, moedas25, moedas10, moedas5, moedas01;
    double saldo;
    
    scanf("%lf", &saldo);

    notas = saldo;
    moedas = (saldo - notas) * 100;
    notas100 = notas / 100;
    notas %= 100;
    notas50 = notas / 50;
    notas %= 50;
    notas20 = notas / 20;
    notas %= 20;
    notas10 = notas / 10;
    notas %= 10;
    notas5 = notas / 5;
    notas %= 5;
    notas2 = notas / 2;
    notas %= 2;
    
    moedas1 = notas;
    moedas50 = moedas / 50;
    moedas %= 50;
    moedas25 = moedas / 25;
    moedas %= 25; 
    moedas10 = moedas / 10;
    moedas %= 10;
    moedas5 = moedas / 5;
    moedas %= 5;
    moedas01 =  moedas / 1;
    
    printf("NOTAS:\n"
           "%i nota(s) de R$ 100.00\n"
           "%i nota(s) de R$ 50.00\n"
           "%i nota(s) de R$ 20.00\n"
           "%i nota(s) de R$ 10.00\n"
           "%i nota(s) de R$ 5.00\n"
           "%i nota(s) de R$ 2.00\n"
           "MOEDAS:\n"
           "%i moeda(s) de R$ 1.00\n"
           "%i moeda(s) de R$ 0.50\n"
           "%i moeda(s) de R$ 0.25\n"
           "%i moeda(s) de R$ 0.10\n"
           "%i moeda(s) de R$ 0.05\n"
           "%i moeda(s) de R$ 0.01\n", 
        notas100, notas50, notas20, notas10, notas5, notas2,
        moedas1, moedas50, moedas25, moedas10, moedas5, moedas01);
    
    return 0;
}