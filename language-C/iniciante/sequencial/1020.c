/**
 * @file 1020.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Idade em Dias
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int diasTotais, anos, meses, dias;
    
    scanf("%i", &diasTotais);

    anos = diasTotais / 365;
    meses = (diasTotais - (anos * 365)) / 30;
    dias = (diasTotais - (anos * 365)) - (meses * 30);
    
    printf("%i ano(s)\n"
           "%i mes(es)\n"
           "%i dia(s)\n", anos, meses, dias);
    
    return 0;
}
