#include <stdio.h>
#include <stdlib.h>

int main(void) {
    FILE * fp; // fp é um ponteiro para arquivo
    fp = fopen("teste.txt", "w"); //abre teste.txt para escrita

    if (fp == NULL) {
        printf("ERRO: arquivo nao foi aberto!\n");
        exit(1);
    }

    fprintf(fp, "No ano que vem, em 2026, teremos pelo menos três feriados!\n"); 
    fprintf(fp, "Adicao");
    printf("Arquivo aberto/criado!\n");

    fclose(fp);
   return 0; 
}