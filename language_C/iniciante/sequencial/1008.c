/**
 * @file 1008.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Salario
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int numeroFuncionario, quantidadeHoras;
    double valorHora, salario;
    
    scanf("%i", &numeroFuncionario);
    scanf("%i", &quantidadeHoras);
    scanf("%lf",&valorHora);
    
    salario = (quantidadeHoras * valorHora);
    
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", numeroFuncionario, salario);

    return 0;
}