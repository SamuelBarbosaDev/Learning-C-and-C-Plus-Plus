# Busca Binária (Binary Search)

## Definição

Algoritmo de busca que divide o espaço ao meio a cada passo.

## Requisito obrigatório

Dados ORDENADOS

## Complexidade

- Tempo:  O(log n)  ← extremamente rápido!
- Espaço: O(1) iterativo / O(log n) recursivo (pilha)

## Vantagens

- Uma das buscas mais rápidas possíveis
- Pouquíssimas comparações mesmo com milhões de elementos

## Desvantagens

- Só funciona em dados ordenados
- Não funciona em listas encadeadas simples (sem acesso aleatório)

## Implementações comuns

1. Iterativa (recomendada)
2. Recursiva
3. Com retorno da posição de inserção
4. Genérica (void* + comparador)
5. bsearch() da stdlib.h

## Fórmula mágica do meio

meio = esquerda + (direita - esquerda) / 2   ← nunca use (e + d)/2!

## Frase para decorar

"Busca binária: lenta para ordenar, rapidíssima para buscar depois."
