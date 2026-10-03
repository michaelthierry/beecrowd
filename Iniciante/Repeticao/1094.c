/**
 * @file 1094.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief 
 * @version 0.1
 * @date 2026-10-03
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int testes, totalCobias, quantidade;
    int totalRatos, totalCoelhos, totalSapos;
    float porcentagemRatos, porcentagemCoelhos, porcentagemSapos;
    scanf("%i", &testes);
    for(int indice = 1; indice <= testes; indice++) {
        char tipo;
        scanf("%i %c", &quantidade, &tipo);
        totalCobias += quantidade;
        if(tipo == 'C') {
            totalCoelhos += quantidade;
        } else if(tipo == 'R') {
            totalRatos += quantidade;
        } else if(tipo == 'S') {
            totalSapos += quantidade;
        }
    }
    porcentagemCoelhos = (totalCoelhos / ((totalCobias) * 1.0)) * 100.00;
    porcentagemRatos = (totalRatos / ((totalCobias) * 1.0)) * 100.00;
    porcentagemSapos = (totalSapos / ((totalCobias) * 1.0)) * 100.00;
    printf(
        "Total: %i cobaias\n"
        "Total de coelhos: %i\n"
        "Total de ratos: %i\n"
        "Total de sapos: %i\n"
        "Percentual de coelhos: %.2f %%\n"
        "Percentual de ratos: %.2f %%\n"
        "Percentual de sapos: %.2f %%\n",
        totalCobias, totalCoelhos, totalRatos, totalSapos,
        porcentagemCoelhos, porcentagemRatos, porcentagemSapos
    );
    return 0;
}