#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "data.h"

int main() {
    FILE *dataset = fopen("../dataset.txt","r");
    int i, p;

    // Lê o arquivo de entrada
    fscanf(dataset,"%d", &qtde_cidades);

    // Lê o nome das cidades
    cidade = malloc(sizeof(char *) * qtde_cidades);

    for(i=0;i<qtde_cidades;i++) {
        cidade[i] = malloc(sizeof(char) * STRMAX);
        fgets(cidade[i],STRMAX,dataset);
        cidade[i][strlen(cidade[i])-1] = '\0'; // Remove o \n da leitura
    }

    // Lê a posição das cidades
    posicao = malloc(sizeof(float *) * qtde_cidades);

    for(i=0;i<qtde_cidades;i++) {
        posicao[i] = malloc(sizeof(float) * 2);
        fscanf(dataset,"%f %f", &posicao[i][0], &posicao[i][1]);
    }

    printf("NOD");

    return 0;
}