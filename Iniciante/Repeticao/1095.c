/**
 * @file 1095.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequencia IJ 1
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int indiceI, indiceJ;
    for(indiceI = 1, indiceJ = 60; indiceJ >= 0; indiceI += 3, indiceJ -= 5) {
        printf("I=%d J=%d\n", indiceI, indiceJ);
    }
    return 0;
}