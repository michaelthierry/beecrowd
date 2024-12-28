/**
 * @file 1006.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1006 - Media 2
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // alocado variaveis
    double primeiraNota, segundaNota, terceiraNota, media;
    // lendo do usuario
    scanf("%lf %lf %lf", &primeiraNota, &segundaNota, &terceiraNota);
    // calculando media
    media = ((primeiraNota * 2.0) + (segundaNota * 3.0) + (terceiraNota * 5.0)) / 10.0;
    // exibindo resultado
    printf("MEDIA = %.1lf\n", media);
    // fim
    return 0;
}