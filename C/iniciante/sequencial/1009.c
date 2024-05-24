/**
 * @file 1009.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1009 - Salario com bônus
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    char *nome; 
    double valorSalario, valorVendas, novoSalario = 0.0;
    // lendo do usuario
    scanf("%s", nome);
    scanf("%lf", &valorSalario);
    scanf("%lf", &valorVendas);
    // calculando salario
    novoSalario = (valorSalario + (valorVendas * 0.15));
    // exibir o resultado
    printf("TOTAL = R$ %.2lf\n", novoSalario);
    // fim
    return 0;
}