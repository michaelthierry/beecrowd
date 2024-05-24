/**
 * @file 1012.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1012 - Area
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    double primeiroValor, segundoValor, terceiroValor;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    const double PI = 3.14159;
    // lendo do usuario
    scanf("%lf %lf %lf", &primeiroValor, &segundoValor, &terceiroValor);
    // calculando a area
    areaTriangulo = (primeiroValor * terceiroValor) / 2.0;
    areaCirculo = PI * (terceiroValor * terceiroValor);
    areaTrapezio = ((primeiroValor + segundoValor) * terceiroValor) / 2.0;
    areaQuadrado = (segundoValor * segundoValor);
    areaRetangulo = (primeiroValor * segundoValor);
    // exibindo resultados
    printf("TRIANGULO: %.3lf\n", areaTriangulo);
    printf("CIRCULO: %.3lf\n", areaCirculo);
    printf("TRAPEZIO: %.3lf\n", areaTrapezio);
    printf("QUADRADO: %.3lf\n", areaQuadrado);
    printf("RETANGULO: %.3lf\n", areaRetangulo);
    // fim
    return 0;
}