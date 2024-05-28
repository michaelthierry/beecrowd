/**
 * @file 1020.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1020 - Idade em dias
 * @version 0.1
 * @date 2024-05-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    int diasTotais, anos, meses, dias;
    // lendo do usuario
    scanf("%i", &diasTotais);
    // calculando os dias
    anos = diasTotais / 365;
    meses = (diasTotais - (anos * 365)) / 30;
    dias = (diasTotais - (anos * 365)) - (meses * 30);
    // exibindo resultado
    printf("%i ano(s)\n", anos);
    printf("%i mes(es)\n", meses);
    printf("%i dia(s)\n", dias);
    // fim
    return 0;
}