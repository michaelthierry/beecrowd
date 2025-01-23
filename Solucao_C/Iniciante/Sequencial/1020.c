/**
 * @file 1020.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1020 - Idade em dias
 * @version 0.1
 * @date 2025-01-23
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    int dias, meses, anos;
    // lendo do usuario
    scanf("%d", &dias);
    // calculando
    anos = dias / 365;
    dias -= (anos * 365);
    meses = dias / 30;
    dias -= (meses * 30);
    // exibindo resultado
    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", anos, meses, dias);
    // fim
    return 0;
}