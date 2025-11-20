# Fila (Queue) – Estrutura de Dados Linear

**Princípio:** FIFO → **F**irst **I**n **F**irst **O**ut  
"O primeiro elemento que entra é o primeiro que sai"

**Analogia real:** fila de banco, fila de impressão, atendimento por ordem de chegada.

## Operações Principais (complexidade ideal)

| Operação      | Nome em inglês | O que faz                       | Complexidade |
|---------------|----------------|---------------------------------|--------------|
| Enqueue       | enqueue / offer| Insere no final (trás)          | O(1)         |
| Dequeue       | dequeue / poll | Remove do início (frente)       | O(1)         |
| Front / Peek  | front / peek   | Consulta o elemento da frente   | O(1)         |
| isEmpty       | isEmpty        | Verifica se está vazia          | O(1)         |
| size          | size           | Quantos elementos tem           | O(1)         |

## Implementações Comuns em C

1. **Array circular** → rápida, tamanho fixo ou redimensionável
2. **Lista encadeada** (recomendada para tamanho ilimitado)  
   → Usa dois ponteiros: `frente` (dequeue) e `tras` (enqueue rápido)

## Por que usar dois ponteiros (frente e trás)?

- Sem o ponteiro `tras`: enqueue seria O(n) → percorreria toda a lista
- Com `tras`: enqueue vira O(1) → altíssima eficiência

## Aplicações Reais

- BFS (Busca em Largura em grafos)
- Escalonamento de processos (Round-Robin)
- Buffers (teclado, rede, áudio/vídeo)
- Fila de tarefas/impressão
- Simulações (supermercado, call center)

**Frase para decorar:**  
"A fila é como uma mangueira: entra água de um lado (enqueue), sai do outro (dequeue)."
