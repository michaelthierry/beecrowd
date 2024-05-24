/**
 * @file 1011.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1011 - Esfera
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    const double PI = 3.14159;
    double raioEsfera, volumeEsfera;
    // lendo do usuario
    scanf("%lf", &raioEsfera);
    // calculando o volume da esfera
    volumeEsfera = ((4.0 / 3.0) * PI * (raioEsfera * raioEsfera * raioEsfera));
    // exibindo resultado
    printf("VOLUME = %.3lf\n", volumeEsfera);
    // fim
    return 0;
}