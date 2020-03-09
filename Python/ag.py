#!/usr/bin/python3

from math import *


"""
Lê o arquivo ../dataset.txt e cria as seguintes variaveis

cidade -> Lista com o nome das cidades
posicao -> Lista com as posições X e Y das cidades
"""


def carrega_dados():
    global cidade, posicao

    f = open("../dataset.txt")
    total = int(f.readline())

    # Lê o nome das cidades
    cidade = list()

    for i in range(total):
        cidade.append(f.readline()[:-1])

    # Lê a posição das cidades
    posicao = list()

    for i in range(total):
        posicao.append([*map(float, f.readline().split())])


def calc_distancia(individuo):
    """
    Calcula a distância de uma cidade até a outra em função da ordenação dos valores (O índice representa a cidade)

    @param individuo: Lista com o valor de cada cidade

    @return: A distância total percorrida
    """

    global posicao
    itens = [*enumerate(individuo)]
    items = sorted(itens, key=lambda x: x[1])
    total = 0
    print(items)
    for v in range(len(items)):
        i = items[v][0]
        j = items[(v+1)%len(items)][0]
        total += sqrt(sum([(posicao[i][x] - posicao[j][x])**2 for x in range(2)]))

    return total


def calc_fitness(individuo):
    return 1.0/(calc_distancia(individuo))