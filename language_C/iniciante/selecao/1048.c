/**
 * @file 1048.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Aumento de salario
 * @version 0.1
 * @date 2025-10-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    float salario;

    scanf("%f", &salario);

    if((salario > 0) && (salario <= 400.00)) {
        float reajuste, novoSalario;

        reajuste = salario * 0.15;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 15 %%\n");
    
    } else if((salario > 400.00) && (salario <= 800.00)) {
        float reajuste, novoSalario;

        reajuste = salario * 0.12;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 12 %%\n");
    
    } else if((salario > 800.00) && (salario <= 1200.00)) {
        float reajuste, novoSalario;

        reajuste = salario * 0.10;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 10 %%\n");
    
    } else if((salario > 1200.00) && (salario <= 2000.00)) {
        float reajuste, novoSalario;

        reajuste = salario * 0.07;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 7 %%\n");

    } else if(salario > 2000.00) {
        float reajuste, novoSalario;

        reajuste = salario * 0.04;
        novoSalario = salario + reajuste;

        printf("Novo salario: %.2f\n", novoSalario);
        printf("Reajuste ganho: %.2f\n", reajuste);
        printf("Em percentual: 4 %%\n");
    }
    
    return 0;
}