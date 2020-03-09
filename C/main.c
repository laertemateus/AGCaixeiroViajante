#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include "data.h"
#include "ag.h"

int main() {
    FILE *dataset = fopen("../dataset.txt","r");
    int i, p, tamanho_populacao, geracoes;

    Individuo **populacao;

    printf("Tamanho da populacao: ");
    scanf("%d", &tamanho_populacao);

    printf("Total de geracoes: ");
    scanf("%d", &geracoes);

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

    // Gera a populacao inicial
    populacao = malloc(sizeof(Individuo *) * tamanho_populacao);

    for(i=0;i<tamanho_populacao;i++) {
        populacao[i] = gera_individuo();
    }

    printf("!DONE!\n");

    return 0;
}