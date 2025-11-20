# Resumo sobre `malloc`

## malloc – Alocação dinâmica de memória em C

`void *malloc(size_t tamanho);`  
Função da <stdlib.h> que reserva um bloco de memória no **heap** (área de memória grande e manual) e retorna o endereço inicial desse bloco.

### Como funciona (passo a passo)

1. Você pede quantos bytes quer: `malloc(sizeof(Node))`
2. O sistema procura um espaço livre no heap com pelo menos esse tamanho.
3. Se encontrar:
   - Reserva o bloco
   - Retorna o ponteiro para o início da área útil
4. Se não encontrar (memória esgotada) → retorna `NULL`

### Uso correto (regra de ouro)

```c
Node *novo = malloc(sizeof(Node));        // bom
Node *novo = malloc(sizeof(*novo));       // ou (ainda melhor – nunca erra o tipo)
Node *novo = malloc(sizeof(struct Node)); // ou
```

**NUNCA faça** `malloc(sizeof(Node*))` → aloca só o tamanho de um ponteiro (8 bytes), não da estrutura!

### Tratamento de erro (obrigatório em código sério)

```c
Node *novo = malloc(sizeof(Node));
if (novo == NULL) {
    printf("Erro: memória insuficiente!\n");
    exit(1);  // ou trate de forma elegante
}
```

### Pontos importantes

- A memória alocada com `malloc` **permanece válida até você chamar `free()`**
- Não é inicializada (pode conter lixo) → use `calloc()` se quiser zeros
- Você é 100% responsável por dar `free()` → evita memory leak
- Pode ser usada em qualquer lugar do programa (não só dentro de funções)

### Ciclo de vida típico de um nó

```c
Node *p = malloc(sizeof(Node));  // nasce no heap
p->dado = 42;
p->prox = NULL;
// ... usa o nó ...
free(p);                         // morre → memória devolvida ao sistema
p = NULL;                        // boa prática (evita dangling pointer)
```

Resumo em uma frase:  
**`malloc` pede memória emprestada do heap e te dá o endereço; você promete devolver com `free()` quando não precisar mais.**
