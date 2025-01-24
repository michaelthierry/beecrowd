/**
 * @file 1021.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1021 - Notas e Moedas
 * @version 0.1
 * @date 2025-01-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int notas, notas100, notas50, notas20, notas10, notas5, notas2;
    int moedas1, moedas50, moedas25, moedas10, moedas5, moedas01;
    double moedas, valor;
    // lendo do usuario
    scanf("%lf", &valor);
    // calculando
    notas = valor;
    moedas = valor - notas;

    notas100 = notas / 100;
    notas -= (notas100 * 100);
    notas50 = notas / 50;
    notas -= (notas50 * 50);
    notas20 = notas / 20;
    notas -= (notas20 * 20);
    notas10 = notas / 10;
    notas -= (notas10 * 10);
    notas5 = notas / 5;
    notas -= (notas5 * 5);
    notas2 = notas / 2;
    notas -= (notas2 * 2);

    moedas1 = notas;
    moedas50 = moedas / 0.50;
    moedas -= (moedas50 * 0.50);
    moedas25 = moedas / 0.25;
    moedas -= (moedas25 * 0.25);
    moedas10 = moedas / 0.10;
    moedas -= (moedas10 * 0.10);
    moedas5  = moedas / 0.05;
    moedas -= (moedas5 * 0.05);
    moedas01 = moedas / 0.01;
    // exibindo resultado
    printf(
        "NOTAS:\n"
        "%d nota(s) de  R$ 100.00\n"
        "%d nota(s) de  R$ 50.00\n"
        "%d nota(s) de  R$ 20.00\n"
        "%d nota(s) de  R$ 10.00\n"
        "%d nota(s) de  R$ 5.00\n"
        "%d nota(s) de  R$ 2.00\n"
        "MOEDAS:\n"
        "%d moeda(s) de R$ 1.00\n"
        "%d moeda(s) de R$ 0.50\n"
        "%d moeda(s) de R$ 0.25\n"
        "%d moeda(s) de R$ 0.10\n"
        "%d moeda(s) de R$ 0.05\n"
        "%d moeda(s) de R$ 0.01\n",
        
        notas100, notas50, notas20, notas10, notas5, notas2,
        moedas1, moedas50, moedas25, moedas10, moedas5, moedas01
    );
    // fim
    return 0;
}