/**
 * @file 1011.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1011 - Esfera
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variaveis
    const double pi = 3.14159;
    double raio, volume;
    // lendo do usuario
    scanf("%lf", &raio);
    // calculando o volume
    volume = (4.0 / 3.0) * pi * (raio * raio * raio);
    // exibindo resultado
    printf("VOLUME = %.3lf\n", volume);
    // fim
    return 0;
}