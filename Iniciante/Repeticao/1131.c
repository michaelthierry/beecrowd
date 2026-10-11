/**
 * @file 1131.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Grenais
 * @version 0.1
 * @date 2026-10-10
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int opcao;
    int vencimentoInter = 0, vencimentoGremio = 0, empates = 0, quantidadeJogos = 0;
    do {
        int golsInter, golsGremio;
        scanf("%d %d", &golsInter, &golsGremio);
        if(golsInter > golsGremio) {
            vencimentoInter++;
        } else if(golsInter < golsGremio) {
            vencimentoGremio++;
        } else {
            empates++;
        }
        quantidadeJogos++;
        printf("Novo grenal (1-sim 2-nao)\n");
        scanf("%i", &opcao);
    } while(opcao != 2);
    printf(
        "%d grenais\n"
        "Inter:%d\n"
        "Gremio:%d\n"
        "Empates:%d\n",
        quantidadeJogos,
        vencimentoInter,
        vencimentoGremio,
        empates
    );
    if(vencimentoInter > vencimentoGremio) {
        printf("Inter venceu mais\n");
    } else if(vencimentoInter < vencimentoGremio) {
        printf("Gremio venceu mais\n");
    } else {
        printf("Não houve vencedor\n");
    }
    return 0;
}