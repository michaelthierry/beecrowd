/**
 * @file 1043.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Triângulo
 * @version 0.1
 * @date 2025-10-11
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main(){
    
    float ladoA, ladoB, ladoC, diferenca, soma;
    
    scanf("%f %f %f", &ladoA, &ladoB, &ladoC);
    
    diferenca = ladoB - ladoC;
    soma = ladoB + ladoC;
    
    if ((diferenca < ladoA) && (ladoA < soma)) {
        
        float perimetroTriangulo = ladoA + ladoB + ladoC;
        
        printf("Perimetro = %.1f\n", perimetroTriangulo);
        
    } else {
        
        float areaTrapezio = ((ladoA + ladoB) / 2) * ladoC;
        
        printf("Area = %.1f\n", areaTrapezio);
    }
    
    return 0;
}