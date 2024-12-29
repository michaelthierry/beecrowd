/**
 * @file 1014.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1014 - Consumo
 * @version 0.1
 * @date 2024-12-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variaveis
    int distanciaPecorrida;
    double combustivelGasto, gasto;
    // lendo do usuario
    scanf("%d %lf", &distanciaPecorrida, &combustivelGasto);
    // calculando
    gasto = distanciaPecorrida / combustivelGasto;
    // exibindo o resultado
    printf("%.3lf kml/l\n", gasto);
    // fim
    return 0;
}