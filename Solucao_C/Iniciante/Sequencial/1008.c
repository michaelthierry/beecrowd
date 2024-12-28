/**
 * @file 1008.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1008 - Salario
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variáveis
    int numeroFuncionario, numeroHoras;
    double valorHoras, salarioFuncionario;
    // lendo do usuário
    scanf("%d %d %lf", &numeroFuncionario, &numeroHoras, &valorHoras);
    // calculando salario
    salarioFuncionario = numeroHoras * valorHoras;
    // exibindo resultados
    printf("NUMBER = %d\nSALARY = U$ %.2lf\n", numeroFuncionario, salarioFuncionario);
    // fim
    return 0;
}