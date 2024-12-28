/**
 * @file 1005.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1005 - Media 1
 * @version 0.1
 * @date 2024-12-28
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main() {
    // declarando variveis
    double primeiraNota, segundaNota, media;
    // lendo do usuario
    scanf("%lf %lf", &primeiraNota, &segundaNota);
    // calculando
    media = ((primeiraNota * 3.5) + (segundaNota * 7.5)) / 11.0;
    // exibindo resultado
    printf("MEDIA = %.5lf\n", media);
    // fim
    return 0;
}