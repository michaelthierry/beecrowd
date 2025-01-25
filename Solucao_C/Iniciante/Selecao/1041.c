/**
 * @file 1041.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1041 - Coordenadas de um Ponto
 * @version 0.1
 * @date 2025-01-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    double x, y;
    // lendo do usuario
    scanf("%lf %lf", &x, &y);
    // verificando
    if(x > 0) {
        // verificando o y
        if(y > 0) {
            // exibe
            printf("Q1\n");

        }else if(y < 0) {
            // exibe
            printf("Q4\n");

        }else {
            // exibe
            printf("Eixo X\n");
        }
    }else if(x < 0) {
        // verificando o y
        if(y > 0) {
            // exibe
            printf("Q2\n");
        }else if(y < 0) {
            // exibe
            printf("Q3\n");
        }else {
            //exibe
            printf("Eixo X\n");
        }
    }else {
        if((y > 0) || (y < 0)){
            // exibe
            printf("Eixo Y\n");
        }else {
            // exibe
            printf("Origem\n");
        }
    }
    // fim
    return 0;
}