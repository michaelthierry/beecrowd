/**
 * @file 1115.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Quadrante
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    while(1) {
        int coordenadaX, coordenadaY;
        scanf("%i %i", &coordenadaX, &coordenadaY);
        if((coordenadaX == 0) || (coordenadaY == 0)) {
            break;
        }
        if(coordenadaX > 0) {
            if(coordenadaY > 0) {
                printf("primeiro\n");
            } else {
                printf("quarto\n");
            }
        } else {
            if(coordenadaY > 0) {
                printf("segundo\n");
            } else {
                printf("terceiro\n");
            }
        }
    }
    return 0;
}