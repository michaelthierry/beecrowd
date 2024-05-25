/**
 * @file 1009.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1009 - Salario com bônus
 * @version 0.2
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    char nome[30]; 
    double valorSalario, valorVendas;
    // lendo do usuario
    scanf("%s", nome);
    scanf("%lf", &valorSalario);
    scanf("%lf", &valorVendas);
    // calculando salario
    valorSalario += (valorVendas * 0.15);
    // exibir o resultado
    printf("TOTAL = R$ %.2lf\n", valorSalario);
    // fim
    return 0;
}