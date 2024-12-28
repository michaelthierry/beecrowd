/**
 * @file 1002.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1002 - Area do Circulo
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // definindo constante
    const double PI = 3.14159;
    // alocando variáveis
    double raio, area;
    // pegando o raio
    scanf("%lf", &raio);
    // calculando
    area = PI * (raio * raio);
    // exibindo resultado
    printf("A=%.4lf\n", area);
    // fim
    return 0;
}