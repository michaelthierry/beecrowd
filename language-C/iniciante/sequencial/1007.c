/**
 * @file 1007.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Diferenca
 * @version 0.1
 * @date 2025-09-29
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){
    
    int primeiroValor, segundoValor, terceiroValor, quartoValor, diferenca;
    
    scanf("%i", &primeiroValor);
    scanf("%i", &segundoValor);
    scanf("%i", &terceiroValor);
    scanf("%i", &quartoValor);
    
    diferenca = ((primeiroValor * segundoValor) - (terceiroValor * quartoValor));
    
    printf("DIFERENCA = %i\n", diferenca);

    return 0;
}
