/**
 * @file 1006.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Media 2
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main(){

    double primeiraNota, segundaNota, terceiraNota, media;

    scanf("%lf", &primeiraNota);
    scanf("%lf", &segundaNota);
    scanf("%lf", &terceiraNota);

    media = ((primeiraNota * 2.0) + (segundaNota * 3.0) + (terceiraNota * 5.0)) / 10.0;
    
    printf("MEDIA = %.1lf\n", media);

    return 0;
}
