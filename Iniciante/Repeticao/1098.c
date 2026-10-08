/**
 * @file 1098.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequencia IJ 4
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    for(int indiceI = 0; indiceI <= 10;  indiceI++) {
        double valorI = indiceI * 0.2;
        for(double indiceJ = 1.0; indiceJ <= 3.0; indiceJ++) {
            double somaIndices = valorI + indiceJ;
            if(valorI == 0.0 || valorI == 1.0 || valorI == 2.0) {
                printf("I=%.0lf J=%.0lf\n", valorI, somaIndices);
            } else {
                printf("I=%.1lf J=%.1lf\n", valorI, somaIndices);
            }
        }
    }
   
    return 0;
}