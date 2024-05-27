/**
 * @file 1008.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1008 - Salario
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    int numeroFuncionario, quantidadeHoras;
    double valorHora, salario;
    // lendo do usuario
    scanf("%i", &numeroFuncionario);
    scanf("%i", &quantidadeHoras);
    scanf("%lf",&valorHora);
    // calculando salario
    salario = (quantidadeHoras * valorHora);
    // exibindo resultado
    printf("NUMBER = %i\nSALARY = U$ %.2lf\n", numeroFuncionario, salario);
    // fim
    return 0;
}