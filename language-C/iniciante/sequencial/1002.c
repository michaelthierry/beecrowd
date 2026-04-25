/**
 * @file 1002.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Area do Circulo
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    
    const double PI = 3.14159;
    double raio, area;
    
    scanf("%lf", &raio);
    
    area = PI * (raio * raio);
    
    printf("A=%.4lf\n", area);
    
    return 0;
}
