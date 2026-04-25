/**
 * @file 1038.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Lanche
 * @version 0.1
 * @date 2025-10-10
 * 
 * @copyright Copyright (c) 2025
 * 
 */
#include <stdio.h>

int main(){

    int quantidade, codigo;
    double total;
    
    scanf("%i %i", &codigo, &quantidade);

    switch(codigo) {

        case 1:
            total = quantidade * 4.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 2:
            total = quantidade * 4.50;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 3:
            total = quantidade * 5.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 4:
            total = quantidade * 2.00;
            printf("Total: R$ %.2lf\n", total);
            break;
        case 5:
            total = quantidade * 1.50;
            printf("Total: R$ %.2lf\n", total);
            break;
        default:
            break;
        
    }
    
    return 0;
}