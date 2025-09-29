/**
 * @file 1005.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Media 1
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main(){

    double primeiraNota, segundaNota, media;

    scanf("%lf", &primeiraNota);
    scanf("%lf", &segundaNota);
    
    media = ((primeiraNota * 3.5) + (segundaNota * 7.5)) / 11.0;

    printf("MEDIA = %.5lf\n", media);

    return 0;
}
