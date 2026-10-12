/**
 * @file 1155.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Sequencia S
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int divisor = 1;
    double somaSequencia = 0.0;
    while(divisor <= 100) {
        somaSequencia += (double) 1.0 / divisor;
        divisor++;
    }
    printf("%.2lf\n", somaSequencia);
    return 0;
}