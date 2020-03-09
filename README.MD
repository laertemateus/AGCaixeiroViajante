# Algoritmo genético para o problema do caixeiro viajante

Este repositório possui os recursos para a implementação de um algoritmo genético em Python com Exemplos em C e Java. Para linguagem Python as funções do cálculo do Fitness e carregamento dos dados já estão implementados.

# Problema
O Problema do Caixeiro Viajante (TSP - *Travelling Salesman Problem*) consiste em indentificar uma rota entre cidades no qual a distância percorrida seja a menor possível.

No arquivo dataset.txt possui o nome de 15 cidades do jogo Final Fatansy 7 seguidas de posições fictícias em um plano cartesiano.

# Indivíduos do AG

Cada indivíduo consiste em um vetor com *n* elementos em que cada posição possui um valor que represnta um número a ser utilizado na ordenação para identificar a sequência das cidades baseada nos seus respectivos índices.

Como exemplo, considere o seguinte indivíduo para uma rota com 5 cidades apenas

|Índice|0|1|2|3|4|
|-|-|-|-|-|-|
|Valor|4|15|8|6|5|

No exemplo Acima A sequência de cidades seriam 0 -> 4 -> 3 -> 2 -> 1 pois seria a ordenação dos valores de cada índice.

# Cross-Over

O processo de cross-over consiste em escolher aleatoriamente um ponto de corte e copiar os valores de cada índice de 2 pais distintos.

O Exemplo abaixo mostra 2 indivíduos em que o ponto de corte foi 3.

Pai 1
|Índice|0|1|2|3|4|
|-|-|-|-|-|-|
|Valor|4|15|8|6|5|

+

Pai 2
|Índice|0|1|2|3|4|
|-|-|-|-|-|-|
|Valor|17|18|21|37|52|

=

|Índice|0|1|2|3|4|
|-|-|-|-|-|-|
|Valor|4|15|8|37|52|

# Mutação

A Mutação é a adição ou subtração do valor de uma determinada posição do vetor baseando-se num valor aleatório.

|Índice|0|1|2|3|4|
|-|-|-|-|-|-|
|Valor|4|15|8|6|5|

Indivíduo mutado na posição 2

|Índice|0|1|2|3|4|
|-|-|-|-|-|-|
|Valor|4|15|0|6|5|

## Processo de execução Algoritmo

O Usuário poderá informar o tamanho da população, quantidade de gerações e a taxa de mutação (número ]0,1[).

O melhor indivíduo deve ser passado automaticamente para a próximo geração.

Ao final de cada geração é necessário mostrar a melhor rota encontrada.

