/**
 * @file 1040.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Problema: Media 3
 * @version 0.1
 * @date 2024-05-29
 * 
 * @copyright Copyright (c) 2024
 * 
 */

#include <stdio.h>

int main(){

    double nota1, nota2, nota3, nota4, media;

    scanf("%lf %lf %lf %lf", &nota1, &nota2, &nota3, &nota4);

    media = ((nota1 * 2.0) + (nota2 * 3.0) + (nota3 * 4.0) + nota4) / 10.0;
    
    printf("Media: %.1lf\n", media);
    
    if(media >= 7.0) {

        printf("Aluno aprovado.\n");

    } else if(media >= 5.0) {
    
        double exame, novaMedia;
        
        printf("Aluno em exame.\n");
        
        scanf("%lf", &exame);
        
        printf("Nota do exame: %.1lf\n", exame);
        
        novaMedia = (media + exame) / 2.0; 
        
        if(novaMedia > 5.0) {

            printf("Aluno aprovado.\n");

        } else {

            printf("Aluno reprovado.\n");
        }
        
        printf("Media final: %.1lf\n", novaMedia);

    } else {

        printf("Aluno reprovado.\n");
    }
    
    return 0;
}