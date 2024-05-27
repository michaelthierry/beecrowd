/**
 * @file 1002.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1002 - Área do Circulo
 * @version 0.1
 * @date 2024-05-18
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    const double PI = 3.14159;
    double raio, area;
    // lendo do usuario
    scanf("%lf", &raio);
    // calculando
    area = PI * (raio * raio);
    // exibindo
    printf("A=%.4lf\n", area);
    // fim
    return 0;
}