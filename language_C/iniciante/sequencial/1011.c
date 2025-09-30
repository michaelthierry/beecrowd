/**
 * @file 1011.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Esfera
 * @version 0.1
 * @date 2025-09-30
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {

    const double PI = 3.14159;
    double raioEsfera, volumeEsfera;
    
    scanf("%lf", &raioEsfera);
    
    volumeEsfera = ((4.0 / 3.0) * PI * (raioEsfera * raioEsfera * raioEsfera));
    
    printf("VOLUME = %.3lf\n", volumeEsfera);
    
    return 0;
}