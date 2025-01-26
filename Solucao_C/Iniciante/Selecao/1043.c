/**
 * @file 1043.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1043 - Triângulo
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variveis
    double ladoA, ladoB, ladoC, somaBC, diferencaBC;
    // lendo do usuario
    scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC);
    //calculando
    somaBC = ladoB + ladoC;
    diferencaBC = ladoB - ladoC;
    // verificando se é tringulo
    if((diferencaBC < ladoA) && (somaBC > ladoA)) {
        // calcula perimetro
        double perimetroTriangulo = somaBC + ladoA;
        // exibe
        printf("Perimetro: %.1lf\n", perimetroTriangulo);
    }else {
        // calculando area do trapezio
        double areaTrapezio = ((ladoA + ladoB) / 2.0) * ladoC;
        // exibe
        printf("Area = %.1lf\n", areaTrapezio);
    }
    // return
    return 0;
}