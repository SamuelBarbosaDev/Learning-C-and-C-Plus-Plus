# ÁRVORE BINÁRIA DE BUSCA (Binary Search Tree - BST)

**Definição**  
Estrutura hierárquica de nós onde cada nó tem no máximo 2 filhos (esquerdo e direito) e obedece à regra:  
→ todos os valores à esquerda são menores que o nó  
→ todos os valores à direita são maiores que o nó  

## Propriedades principais

- Raiz única
- Sem ciclos
- Percurso em-ordem produz sequência ordenada
- Altura ideal: O(log n) → pior caso (degenerada): O(n)

## Complexidade (média / pior)

| Operação   | Média       | Pior caso   |
|------------|-------------|-------------|
| Inserção   | O(log n)    | O(n)        |
| Busca      | O(log n)    | O(n)        |
| Remoção    | O(log n)    | O(n)        |

## Operações fundamentais

- `insert()`      → inserção recursiva mantendo a propriedade da BST
- `search()`      → busca recursiva (vai só para esquerda ou direita)
- `deleteNode()`  → 3 casos:
  1. Nó sem filhos ou com 1 filho → substitui pelo filho (ou NULL)
  2. Nó com 2 filhos → substitui pelo sucessor in-ordem (menor da subárvore direita) e remove o sucessor
- `inorder()`     → esquerda → raiz → direita (imprime em ordem crescente)
- `preorder()`    → raiz → esquerda → direita
- `postorder()`   → esquerda → direita → raiz (útil para liberar memória)
- `height()`      → maior altura entre subárvores + 1
- `freeTree()`    → pós-ordem para liberar todos os nós

## Dicas importantes em C

- Sempre verificar `malloc` → `NULL`
- Nunca esquecer de liberar a árvore (`freeTree(root)`)
- Evitar inserção ordenada/decrescente (degenera em lista ligada)
- Para balanceamento → usar AVL ou Árvore Rubro-Negra

## Quando usar BST?

- Buscas, inserções e remoções frequentes com dados que chegam em ordem aleatória
- Necessidade de manter os elementos ordenados sem usar vetor ordenado
- Base para Mapas/Conjuntos em C (ex.: implementação de `std::map` em C++)

Próximos passos: AVL Tree, Red-Black Tree, B-Tree, Trie, Heap.
