/**
 * @file 1049.c
 * @author Michael Thierry (michaelthierry86@gmail.com)
 * @brief Animal
 * @version 0.1
 * @date 2025-10-14
 * 
 * @copyright Copyright (c) 2025
 * 
 */

#include <stdio.h>
#include <string.h>

int main() {
   
    char primeiraPalavra[30], segundaPalavra[30], terceiraPalavra[30];
    
    scanf("%s", primeiraPalavra);
    scanf("%s", segundaPalavra);
    scanf("%s", terceiraPalavra);
    
    if (strcmp(primeiraPalavra, "vertebrado") == 0) {
        
        if(strcmp(segundaPalavra, "ave") == 0) {
        
            if (strcmp(terceiraPalavra, "carnivoro") == 0) {
        
                printf("aguia\n");

            } else if(strcmp(terceiraPalavra, "onivoro") == 0) {

                printf("pomba\n");
            }

       } if(strcmp(segundaPalavra, "mamifero") == 0) {

            if (strcmp(terceiraPalavra, "onivoro") == 0) {

                printf("homem\n");

            } else if(strcmp(terceiraPalavra, "herbivoro") == 0) {

                printf("vaca\n");
            }
       }

    } else if(strcmp(primeiraPalavra, "invertebrado") == 0) {
       
        if(strcmp(segundaPalavra, "inseto") == 0) {

            if (strcmp(terceiraPalavra, "hematofago") == 0) {
                
                printf("pulga\n");

            } else if(0 == strcmp(terceiraPalavra, "herbivoro")) {
                
                printf("largata\n");
            }

       } if(strcmp(segundaPalavra, "anelideo") == 0) {

           if(strcmp(terceiraPalavra, "hematofago") == 0) {

                printf("sanguesuga\n");

           } else if (strcmp(terceiraPalavra, "onivoro") == 0) {

                printf("minhoca\n");

           }

       }
    }
    
    return 0;
}
