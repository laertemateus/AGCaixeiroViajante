#ifndef __AG_H__

#include <stdlib.h>
#include "data.h"

typedef struct
{
    int *cromossomo; // Caracteristicas do individuo
    float distancia; // Distância total do indivíduo
} Individuo;

/**
 * Gera um individuo aleatoriamente
 **/
Individuo *gera_individuo();

/**
 * Calcula a distância total da solução
 **/
float calc_distancia();

#endif