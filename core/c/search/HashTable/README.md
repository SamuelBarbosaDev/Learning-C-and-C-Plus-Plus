# Tabela Hash (Hash Table)

## Definição

Estrutura que mapeia chaves → valores usando função hash.

## Objetivo

Operações em tempo médio O(1)

## Componentes

- Array fixo
- Função hash (ex: djb2, FNV, Murmur)
- Tratamento de colisão

## Métodos de colisão

1. Encadeamento (Chaining) → listas em cada posição (mais fácil e robusto)
2. Endereçamento aberto → procura próximo slot livre

## Complexidade média

- Inserir/Buscar/Remover: O(1)
- Pior caso: O(n) (muitas colisões)

Fator de carga (load factor): número de elementos / tamanho da tabela
→ Ideal: < 0.7 (para encadeamento) | < 0.5 (aberto)

Funções hash boas: djb2, FNV-1a, MurmurHash

## Quando usar

- Buscas muito rápidas por chave
- Dicionários, caches, conjuntos (sets)
- Contagem de frequência
- Verificar existência rápida

## Dicas

- Sempre use número primo como tamanho da tabela
- Use djb2 ou FNV-1a como função hash (são excelentes)
- Monitore o fator de carga — se > 70%, faça rehash (aumente a tabela)
- Para produção: use encadeamento (mais previsível)

## Frase para decorar

"Hash table: O(1) médio. Se está lento, sua função hash ou tamanho está ruim!"
