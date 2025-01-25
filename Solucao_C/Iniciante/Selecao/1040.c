/**
 * @file 1040.c
 * @author michaelthierry (michaelthierry86@gmail.com)
 * @brief 1040 - Media 3 
 * @version 0.1
 * @date 2025-01-25
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>

int main() {
    // variaveis
    double nota1, nota2, nota3, nota4, media;
    // lendo do usuario
    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);
    // calculando media
    media = ((nota1 * 2.0) + (nota2 * 3.0) + (nota3 * 4.0) + nota4) / 10.0;
    // mostra a media
    printf("Media: %.1lf\n", media);
    // verifica
    if(media >= 7.0){
        printf("Aluno aprovado.\n");
    }else if(media >= 5.0){
        // novas variaveis
        double notaExame, novaMedia;
        // exibe
        printf("Aluno em exame.\n");
        // lendo nota do exame
        scanf("%lf", &notaExame);
        // exibe
        printf("Nota do exame: %.1lf\n", notaExame);
        // calculando nova media
        novaMedia = (media + notaExame) / 2.0;
        // verifica nova media
        if(novaMedia >  5.0) {
            printf("Aluno aprovado.\n");
        }else {
            printf("Aluno reprovado.\n");
        }
        // exibe media final
        printf("Media final: %.1lf\n", novaMedia);
    }else {
        // exibe
        printf("Aluno reprovado.\n");
    }
    // fim
    return 0;
}