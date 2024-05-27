/**
 * @file 1005.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1005 - Média 1
 * @version 0.1
 * @date 2024-05-24
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    // varaiaveis
    double primeiraNota, segundaNota, media;
    // lendo do usuario
    scanf("%lf", &primeiraNota);
    scanf("%lf", &segundaNota);
    // calculando
    media = ((primeiraNota * 3.5) + (segundaNota * 7.5)) / 11.0;
    // exibindo resultado
    printf("MEDIA = %.5lf\n", media);
    // fim
    return 0;
}