/**
 * @file 1015.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Distancia Entre Dois Pontos
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>
#include <math.h>

int main() {

    double x1, y1;
    double x2, y2;
    double deltaX, deltaY, distancia;
    
    scanf("%lf %lf", &x1, &y1);
    scanf("%lf %lf", &x2, &y2);

    deltaX = (x2 - x1);
    deltaY = (y2 - y1);
    distancia = sqrt((deltaX * deltaX) + (deltaY *deltaY));
    
    printf("%.4lf\n", distancia);
    
    return 0;
}