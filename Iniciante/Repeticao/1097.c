/**
 * @file 1097.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequência IJ 3
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int indiceI, indiceJ, indiceK = 7;
    for(indiceI = 1; indiceI <= 9; indiceI += 2) {
        for(indiceJ = indiceK; indiceJ >= (indiceK - 2); indiceJ -= 1) {
            printf("I=%i J=%i\n", indiceI, indiceJ);
        }
        indiceK += 2;
    }
    return 0;
}