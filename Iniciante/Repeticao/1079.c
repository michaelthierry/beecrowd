/**
 * @file 1079.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Médias Ponderadas
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade;
    scanf("%i", &quantidade);
    while(quantidade > 0) {
        double valor1, valor2, valor3, mediaPonderada;
        scanf("%lf %lf %lf", &valor1, &valor2, &valor3);
        mediaPonderada = ((valor1 * 2.0) + (valor2 * 3.0) + (valor3 * 5.0)) / 10.0;
        printf("%.1lf\n", mediaPonderada);
        quantidade--;
    }
    return 0;
}