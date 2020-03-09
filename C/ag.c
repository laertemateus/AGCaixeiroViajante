#include "ag.h"

Individuo *gera_individuo()
{
    Individuo *ind = malloc(sizeof(Individuo));
    int i;

    // Gera os alelos aleatoriamente
    ind->cromossomo = malloc(sizeof(int) * qtde_cidades);

    for (i = 0; i < qtde_cidades; i++)
    {
        ind->cromossomo[i] = rand() % 100;
    }

    // Calcula o Fitness
    ind->distancia = calc_distancia(ind);

    return ind;
}

float calc_distancia(Individuo *ind) {
    int **itens;

    // Gera os pares Indice/Valor do cromossomo
    itens = malloc(sizeof(int *) * qtde_cidades);
    

    return 0;
}