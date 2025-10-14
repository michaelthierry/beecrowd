/**
 * @file 1045.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Tipos de Triângulos
 * @version 0.1
 * @date 2025-10-13
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    
    float valorA, valorB, valorC;
    
    scanf("%f %f %f", &valorA, &valorB, &valorC);
    
    if(valorA < valorB) {
        if(valorA < valorC) {
            if(valorB < valorC) {
                
                float auxiliar;
                auxiliar = valorA;
                valorA = valorC;
                valorC = auxiliar;
            } else {
                
                float auxiliar;
                auxiliar = valorA;
                valorA = valorB;
                valorB = valorC;
                valorC = auxiliar;
            }
        } else {
            
            float auxiliar;
            auxiliar = valorB;
            valorB = valorA;
            valorA = auxiliar;
        }
    } else {
        if(valorB < valorC) {
            if(valorA < valorC) {
                
                float auxiliar;
                auxiliar = valorC;
                valorC = valorB;
                valorB = valorA;
                valorA = auxiliar;
            } else {
                
                float auxiliar;
                auxiliar = valorB;
                valorB = valorC;
                valorC = auxiliar;
            }
        }
    }

    if(valorA >= (valorB + valorC)) {
        
        printf("NAO FORMA TRIANGULO\n");

    } else {
        
        float quadradoA, somaQuadradoAB;
        
        quadradoA = valorA * valorA;
        somaQuadradoAB = (valorB * valorB) + (valorC * valorC);
        
        if(quadradoA == somaQuadradoAB) {
            printf("TRIANGULO RETANGULO\n");

        }
        if(quadradoA > somaQuadradoAB) {
            printf("TRIANGULO OBTUSANGULO\n");

        }
        if(quadradoA < somaQuadradoAB) {
            printf("TRIANGULO ACUTANGULO\n");
            
        }
        if((valorA == valorB) && (valorA == valorC)) {
            printf("TRIANGULO EQUILATERO\n");

        }
        if((valorA == valorB) && (valorA != valorC) || (valorA == valorC) && (valorA != valorB) || (valorB == valorC) && (valorB != valorA)) {
            printf("TRIANGULO ISOSCELES\n");

        }
    }

    return 0;
}