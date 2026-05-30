/**
 * @file 1061.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Tempo de um evento
 * @version 0.1
 * @date 2026-05-30
 * 
 * @copyright Copyright (c) 2026
 * 
 */

#include <stdio.h>

int main() {
    int primeiroDia, horasPrimerioDia, minutosPrimeiroDia, segundosPrimeiroDia;
    int segundoDia, horasSegundoDia, minutosSegundoDia, segundosSegundoDia;
    int diasTotais, horasTotais, minutosTotais, segundosTotais;

    scanf("%*s %d", &primeiroDia);
    scanf("%d %*s", &horasPrimerioDia);
    scanf("%d %*s", &minutosPrimeiroDia);
    scanf("%d", &segundosPrimeiroDia);
    
    scanf("%*s %d", &segundoDia);
    scanf("%d %*s", &horasSegundoDia);
    scanf("%d %*s", &minutosSegundoDia);
    scanf("%d", &segundosSegundoDia);

    segundosPrimeiroDia += (primeiroDia * 86400) + (horasPrimerioDia * 3600) + (minutosPrimeiroDia * 60);
    segundosSegundoDia += (segundoDia * 86400)  + (horasSegundoDia * 3600) + (minutosSegundoDia * 60);

    segundosTotais = segundosSegundoDia - segundosPrimeiroDia;
    diasTotais = (segundosTotais / 86400);
    segundosTotais = (segundosTotais % 86400);
    horasTotais = (segundosTotais / 3600);
    segundosTotais = (segundosTotais % 3600);
    minutosTotais = (segundosTotais / 60);
    segundosTotais = (segundosTotais % 60);

    printf(
        "%d dia(s)\n"
        "%d hora(s)\n"
        "%d minuto(s)\n"
        "%d segundo(s)\n",
        diasTotais, horasTotais, minutosTotais, segundosTotais
    );

    return 0;

}