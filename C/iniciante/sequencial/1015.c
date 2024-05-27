/**
 * @file 1015.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1015 - Distancia entre dois pontos
 * @version 0.1
 * @date 2024-05-26
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>
#include <math.h>

int main(){
    // variaveis
    double x1, y1;
    double x2, y2;
    double deltaX, deltaY, distancia;
    // lendo do usuario
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);
    // calculando deltax e deltay
    deltaX = (x2 - x1);
    deltaY = (y2 - y1);
    // calculando a distancia
    distancia = sqrt((deltaX * deltaX) + (deltaY *deltaY));
    // exibindo resultado
    printf("%.4lf\n", distancia);
    // fim
    return 0;
}