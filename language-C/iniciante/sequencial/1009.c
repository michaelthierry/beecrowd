/**
 * @file 1009.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Salario com Bonus
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main(){
    
    char nome[30]; 
    double valorSalario, valorVendas, novoSalario;
    
    scanf("%s", nome);
    scanf("%lf", &valorSalario);
    scanf("%lf", &valorVendas);
    
    novoSalario = valorSalario + (valorVendas * 0.15);
    
    printf("TOTAL = R$ %.2lf\n", novoSalario);
    
    return 0;
}