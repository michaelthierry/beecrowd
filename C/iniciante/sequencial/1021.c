/**
 * @file 1021.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1021 - Notas e Moedas
 * @version 0.1
 * @date 2024-05-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    int notas, notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas, moedas1, moedas50, moedas25, moedas10, moedas5, moedas01;
    double saldo;
    // lendo do usuario
    scanf("%lf", &saldo);
    // calculando as notas
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
    // calculando as moedas
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
    // mostrando resultado
    printf("NOTAS:\n");
    printf("%i nota(s) de R$ 100.00\n", notas100);
    printf("%i nota(s) de R$ 50.00\n", notas50);
    printf("%i nota(s) de R$ 20.00\n", notas20);
    printf("%i nota(s) de R$ 10.00\n", notas10);
    printf("%i nota(s) de R$ 5.00\n", notas5);
    printf("%i nota(s) de R$ 2.00\n", notas2);
    printf("MOEDAS:\n");
    printf("%i moeda(s) de R$ 1.00\n", moedas1);
    printf("%i moeda(s) de R$ 0.50\n", moedas50);
    printf("%i moeda(s) de R$ 0.25\n", moedas25);
    printf("%i moeda(s) de R$ 0.10\n", moedas10);
    printf("%i moeda(s) de R$ 0.05\n", moedas5);
    printf("%i moeda(s) de R$ 0.01\n", moedas01);
    // fim
    return 0;
}