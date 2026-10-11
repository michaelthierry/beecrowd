/**
 * @file 1116.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Dividindo X por Y
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int quantidade;
    scanf("%i", &quantidade);
    while(quantidade > 0) {
        int dividendo, divisor;
        scanf("%i %i", &dividendo, &divisor);
        if(divisor == 0) {
            printf("divisao impossivel\n");
        } else {
            double quociente;
            quociente = (double) dividendo / divisor;
            printf("%.1lf\n", quociente);
        }
        quantidade--;
    }
    return 0;
}