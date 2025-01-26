/**
 * @file 1045.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1045 - Tipos de Triângulo
 * @version 0.1
 * @date 2025-01-26
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variveis
    double ladoA, ladoB, ladoC, auxiliar;
    // lendo do usuario
    scanf("%lf %lf %lf", &ladoA, &ladoB, &ladoC);
    // ordenando decrescente
    if(ladoA < ladoB) {
        if(ladoA < ladoC) {
            if(ladoB < ladoC) {
                auxiliar = ladoA;
                ladoA = ladoC;
                ladoC = auxiliar;
            }else {
                auxiliar = ladoA;
                ladoA = ladoB;
                ladoB = ladoC;
                ladoC = auxiliar; 
            }
        }else {
            auxiliar = ladoA;
            ladoA = ladoB;
            ladoB = auxiliar;
        }       
    }else {
        if(ladoB < ladoC) {
            if(ladoA < ladoC) {
                auxiliar = ladoA;
                ladoA = ladoC;
                ladoC = ladoB;
                ladoB = auxiliar;
            }else {
                auxiliar = ladoB;
                ladoB = ladoC;
                ladoC = auxiliar;
            }
        }
    }

    // verifica
    if(ladoA >= (ladoB + ladoC)) {
        // exibe
        printf("NAO FORMA TRIANGULO\n");
    }else {
        // variaveis
        double quadradoA, somaQuadradoBC;
        // calculando
        quadradoA = (ladoA * ladoA);
        somaQuadradoBC = (ladoB * ladoB) + (ladoC * ladoC);
        // verifica tipo de triangulo
        if(quadradoA == somaQuadradoBC){
            // exibe
            printf("TRIANGULO RETANGULO\n");
        }
        if(quadradoA > somaQuadradoBC) {
            // exibe
            printf("TRIANGULO OBTUSANGULO\n");
        }
        if(quadradoA < somaQuadradoBC) {
            // exibe
            printf("TRIANGULO ACUTANGULO\n");
        }
        if((ladoA == ladoB) && (ladoA == ladoC)) {
            // exibe
            printf("TRIANGULO EQUILATERO\n");
        }
        if((ladoA == ladoB) && (ladoA != ladoC) || (ladoA == ladoC) && (ladoA != ladoB) || (ladoB == ladoC) && (ladoB != ladoA)) {
            printf("TRIANGULO ISOSCELES\n");
        }
    }
    // fim
    return 0;
}