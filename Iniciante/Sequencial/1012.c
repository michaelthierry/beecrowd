/**
 * @file 1012.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Area
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {

    double primeiroValor, segundoValor, terceiroValor;
    double areaTriangulo, areaCirculo, areaTrapezio, areaQuadrado, areaRetangulo;
    const double PI = 3.14159;
    
    scanf("%lf %lf %lf", &primeiroValor, &segundoValor, &terceiroValor);
    
    areaTriangulo = (primeiroValor * terceiroValor) / 2.0;
    areaCirculo = PI * (terceiroValor * terceiroValor);
    areaTrapezio = ((primeiroValor + segundoValor) * terceiroValor) / 2.0;
    areaQuadrado = (segundoValor * segundoValor);
    areaRetangulo = (primeiroValor * segundoValor);
    
    printf("TRIANGULO: %.3lf\n"
           "CIRCULO: %.3lf\n"
           "TRAPEZIO: %.3lf\n"
           "QUADRADO: %.3lf\n"
           "RETANGULO: %.3lf\n", areaTriangulo, areaCirculo, areaTrapezio ,areaQuadrado, areaRetangulo);

    return 0;
}