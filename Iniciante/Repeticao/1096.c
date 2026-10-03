/**
 * @file 1096.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequencial IJ 2
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int indiceI, indiceJ;
    for(indiceI = 1; indiceI <= 9; indiceI += 2) {
        for(indiceJ = 7; indiceJ >= 5; indiceJ -= 1) {
            printf("I=%i J=%i\n", indiceI, indiceJ);
        }
    }
    return 0;
}