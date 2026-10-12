/**
 * @file 1160.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Crescimento Populacional
 * @version 0.1
 * @date 2026-10-11
 * 
 * @copyright Copyright (c) 2026
 * 
 */
#include <stdio.h>
int main() {
    int numeroTestes;
    scanf("%d", &numeroTestes);
    while(numeroTestes > 0) {
        int populacaoA, populacaoB, anos = 0;
        double crescimentoA, crescimentoB;
        scanf("%d %d %lf %lf", &populacaoA, &populacaoB, &crescimentoA, &crescimentoB);
        while(populacaoA <= populacaoB) {
            populacaoA += ((crescimentoA / 100) * populacaoA);
            populacaoB += ((crescimentoB / 100) * populacaoB);
            anos++;
            if(anos > 100) {
                break;
            }
        }
        if(anos > 100) {
            printf("Mais de 1 seculo.\n");
        } else {
            printf("%d anos.\n", anos);
        }
        numeroTestes--;
    }
    return 0;
}