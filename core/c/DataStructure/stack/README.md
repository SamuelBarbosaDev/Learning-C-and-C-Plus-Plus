# Pilha (Stack)

**Definição**  
Pilha é uma estrutura de dados linear que obedece ao princípio **LIFO**  
→ **Last In, First Out** (Último a entrar, Primeiro a sair).

**Analogia clássica**  
Pilha de pratos: só pode colocar e tirar pelo topo.

## Operações principais (todas O(1))

| Operação     | Nome inglês | Descrição                              |
|--------------|-------------|----------------------------------------|
| push         | push        | Insere elemento no topo                |
| pop          | pop         | Remove e retorna o elemento do topo    |
| peek / top   | peek/top    | Consulta o topo sem remover            |
| is_empty     | is_empty    | Verifica se está vazia                 |
| size         | size        | Retorna quantidade de elementos        |

## Formas de implementação em C

- Array (vetor) → tamanho fixo, mais rápido em cache
- Lista encadeada → tamanho dinâmico (recomendada na maioria dos casos)

**Implementação recomendada**: Lista encadeada simples (dinâmica)

```c
typedef struct Node {
    int data;
    struct Node* next;
} Node;

typedef struct Stack {
    Node* top;
    int size;
} Stack;
```

## Vantagens da implementação com lista encadeada

- Cresce e diminui dinamicamente
- Todas as operações em tempo constante O(1)
- Não desperdiça memória

## Aplicações reais muito comuns

- Desfazer/Refazer (Ctrl+Z)
- Verificação de parênteses/expressões balanceadas
- Avaliação de expressões pós-fixas (RPN)
- Pilha de chamada da CPU (recursão)
- Backtracking e algoritmos DFS
- Botão “voltar” do navegador

## Cuidados importantes em C

- Sempre verificar pilha vazia antes de pop/peek
- Liberar memória de todos os nós ao destruir a pilha (evitar memory leak)

**Frase para decorar**  
“Pilha = LIFO = só mexe no topo = push, pop, peek”
