/**
 * @file 1012.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1012 - Área
 * @version 0.1
 * @date 2024-12-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variaveis
    const double PI = 3.14159;
    double ladoA, ladoB, ladoC;
    double triangulo, circulo, trapezio, quadrado, retangulo;
    // lendo do usuario
    scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC);
    // calculando 
    triangulo = (ladoA * ladoC) / 2.0;
    circulo = PI * (ladoC * ladoC);
    trapezio = ((ladoA + ladoB) * ladoC) / 2.0;
    quadrado = (ladoB * ladoB);
    retangulo = (ladoA * ladoB);
    // exibindo resultados
    printf("TRIANGULO: %.3lf\n"
           "CIRCULO: %.3lf\n"
           "TRAPEZIO: %.3lf\n"
           "QUADRADO: %.3lf\n"
           "RETANGULO: %.3lf\n",
           triangulo, circulo, trapezio, quadrado, retangulo);
    // fim
    return 0;
}
