/**
 * @file 1051.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Imposto de renda
 * @version 0.1
 * @date 2025-10-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    double salario, deducao, imposto;

    scanf("%lf", &salario);

    if((salario >= 0) && (salario <= 2000.00)) {
        printf("Isento\n");

    } if((salario > 2000.00) && (salario <= 3000.00)) {
        deducao = (salario - 2000.00);
        imposto = (deducao * 0.08);
        printf("R$ %.2lf\n", imposto);

    } if((salario > 3000.00) && (salario <= 4500.00)) {
        deducao = (salario - 3000.00); 
        imposto = (deducao * 0.18) + 80; // + 80 -> imposto de 8% sobre 1000
        printf("R$ %.2lf\n", imposto);

    } if(salario > 4500.00) {
        deducao = (salario - 4500.00);
        imposto = (deducao * 0.28) + 350; // + 350 -> imposto de 18% sobre 1500 + imposto de 8% sobre 1000 
        printf("R$ %.2lf\n", imposto);
    }

    return 0;
}