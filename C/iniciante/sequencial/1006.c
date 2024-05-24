/**
 * @file 1006.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1006 - Media 2
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // variaveis
    double primeiraNota, segundaNota, terceiraNota, media;
    // lendo do usuario
    scanf("%lf", &primeiraNota);
    scanf("%lf", &segundaNota);
    scanf("%lf", &terceiraNota);
    // calculando
    media = ((primeiraNota * 2.0) + (segundaNota * 3.0) + (terceiraNota * 5.0)) / 10.0;
    // exibindo resultado
    printf("MEDIA = %.1lf\n", media);
    // fim
    return 0;
}