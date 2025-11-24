# Busca Sequencial (Linear Search)

## Definição

Método de busca que examina os elementos de uma coleção **um a um**, na ordem em que estão armazenados, até encontrar o elemento desejado ou percorrer tudo.

## Características principais

- Funciona em dados **ordenados ou não ordenados**.
- Ideal para **listas pequenas** ou quando a simplicidade é prioridade.
- Implementação mais simples entre todos os algoritmos de busca.

## Complexidade de tempo

- Melhor caso: **O(1)** – elemento está na primeira posição  
- Pior caso: **O(n)** – elemento está no final ou não existe  
- Caso médio: **O(n)**

## Complexidade de espaço

- **O(1)** – apenas algumas variáveis auxiliares

## Vantagens

- Código extremamente simples e legível
- Não exige ordenação prévia
- Funciona em arrays, listas encadeadas, arquivos sequenciais, etc.

## Desvantagens

- Ineficiente em coleções grandes
- Sempre percorre até o pior caso quando o elemento não existe

## Retorno comum

- Índice/posição do elemento → se encontrado  
- -1 ou NULL → se não encontrado

## Variantes úteis

1. Busca comum (com `for` ou `while`)
2. Busca com sentinela (economiza uma comparação por iteração)
3. Busca genérica (usa `void*` + função de comparação)
4. Busca em lista encadeada (retorna ponteiro do nó)

## Quando usar

- Lista não ordenada
- Lista pequena (< 1000 elementos)
- Implementação rápida / código didático
- Estruturas encadeadas (busca binária não se aplica)

## Quando NÃO usar

- Lista grande e ordenada → use **busca binária** (O(log n))

## Frase para decorar

“Busca sequencial: a mais simples, a mais lenta em listas grandes, mas sempre funciona.”
