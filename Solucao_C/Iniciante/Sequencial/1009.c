/**
 * @file 1009.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1009 - Salario com Bonus
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // alocando variaveis
    char nomeVendedor[32];
    double salarioVendedor, valorVendasVendedor, novoSalarioVendedor;
    // lendo do usuario
    scanf("%s %lf %lf", nomeVendedor, &salarioVendedor, &valorVendasVendedor);
    // calculando novo salario
    novoSalarioVendedor = salarioVendedor + (0.15 * valorVendasVendedor);
    // exibindo resultado
    printf("TOTAL = R$ %.2lf\n", novoSalarioVendedor);
    // fim
    return 0;
}