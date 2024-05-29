/**
 * @file 1037.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: 1037 - Intervalo
 * @version 0.1
 * @date 2024-05-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){
    
    // variaveis
    double valor;
    // lendo do usuario
    scanf("%lf", &valor);
    // verificando intervalo
    if((valor >= 0.0) && (valor <= 25.0)){

        printf("Intervalo [0,25]\n");

    }else if((valor > 25.0) && (valor <= 50.0)){
        
        printf("Intervalo (25,50]\n");

    }else if((valor > 50.0) && (valor <= 75.0)){
        
        printf("Intervalo (50,75]\n");

    }else if((valor > 75.0) && (valor <= 100.0)){
        
        printf("Intervalo (75,100]\n");

    }else{
        printf("Fora de intervalo\n");
    }
    // fim
    return 0;
}