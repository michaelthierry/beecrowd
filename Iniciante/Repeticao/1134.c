/**
 * @file 1134.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Tipo de Combustivel
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int opcao = 0, alcool = 0, gasolina = 0, diesel = 0;
    while(opcao != 4) {
        scanf("%d", &opcao);
        if(opcao == 1) {
            alcool++;
        } else if(opcao == 2) {
            gasolina++;
        } else if(opcao == 3) {
            diesel++;
        }
    }
    printf(
        "MUITO OBRIGADO\n"
        "Alcool: %d\n"
        "Gasolina: %d\n"
        "Diesel: %d\n",
        alcool, gasolina, diesel
    );
    return 0;
}