/**
 * @file 1015.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1015 - Distancia entre dois pontos
 * @version 0.1
 * @date 2024-12-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <math.h>

int main() {
    // declarando variaveis
    double x1, y1, x2, y2, distancia, deltaX, deltaY;
    // lendo do usuario
    scanf("%lf %lf %lf %lf", &x1, &y1, &x2, &y2);
    // calculando
    deltaX = (x2 - x1);
    deltaY = (y2 - y1);
    deltaX = (deltaX * deltaX);
    deltaY = (deltaY * deltaY);
    distancia = pow((deltaX + deltaY), 0.5);
    // exibindo resultado
    printf("%.4lf\n", distancia);
    // return
    return 0;
}