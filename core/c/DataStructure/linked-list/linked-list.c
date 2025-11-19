#include <stdio.h>
#include <stdlib.h>

// Estrutura do nó da lista
typedef struct Node{
    int dado;           // Pode ser qualquer tipo (int, float, struct, etc.)
    struct Node* prox;  // Ponteiro para o próximo nó
} Node;

// Tipo para a lista (apenas o ponteiro para o início)
typedef struct{
    Node* inicio; // Cabeça da lista
    int tamanho;  // Opcional, mas muito útil
} Lista;

// Criar uma lista vazia
Lista* criarLista(){
    
    Lista* lista = (Lista*)malloc(sizeof(Lista));
    
    if(lista != NULL){
        lista->inicio = NULL;
        lista->tamanho = 0;
    }

    return lista;
};

// Inserir no início (mais fácil e rápido)
void inserirInicio(Lista* lista, int valor){
    Node* novo = (Node*)malloc(sizeof(Node));
    
    if (novo == NULL){
        printf("Erro de alocação!\n");
        return;
    }

    novo->dado = valor;
    novo->prox = lista->inicio;  // Novo nó aponta para o antigo início
    lista->inicio = novo;
    lista->tamanho++;
};

// Inserir no final
void inserirFinal(Lista*lista, int valor){
    Node* novo = (Node*)malloc(sizeof(Node));

    if (novo == NULL) return;

    novo->dado = valor;
    novo->prox = NULL;

    if (lista->inicio == NULL){
        // lista vazia
        lista->inicio = novo;
    } else {
        Node* temp = lista->inicio;
        while (temp->prox != NULL){
            temp = temp->prox;
        }
        temp->prox = novo;
    }
    lista->tamanho++;
};

// Inserir em posição especifica (Índice começando em 0)
int inserirPosicao(Lista* lista, int valor, int pos){

    if (pos < 0 || pos > lista->tamanho){
        printf("Posição inválida\n");
        return 0;
    }

    if (pos == 0){
        inserirInicio(lista, valor);
        return 1;
    }

    // Acredito que essa verificação é feita para verificar se tem espaço na memória RAM.
    Node* novo = (Node*)malloc(sizeof(Node));
    if (novo == NULL) return 0;

    novo->dado = valor;
    
    Node* temp = lista->inicio;
    for (int i = 0; i < pos - 1; i++){
        temp = temp->prox;
    }

    novo->prox = temp->prox;
    temp->prox = novo;
    lista->tamanho++;
    return 1;
}

// Removendo do início
int removerInício(Lista* lista){
    if (lista->inicio == NULL){
        printf("Lista vazia!\n");
        return 0;
    }

    Node* temp = lista->inicio;
    lista->inicio = lista->inicio->prox;
    free(temp);
    lista->tamanho--;
    return 1;
}

// Removendo do final
int removerFinal(Lista* lista){
    if (lista->inicio == NULL) {
        printf("Lista vazia!\n");
        return 0;
    };

    if (lista->inicio->prox == NULL){
        // Só tem um elemento
        free(lista->inicio);
        lista->inicio = NULL; 
    } else {
        Node* temp = lista->inicio;
        
        while (temp->prox->prox != NULL){
            temp = temp->prox;
        }
        
        free(temp->prox);
        temp->prox = NULL;
    }
    lista->tamanho--;
    return 1;
}

//Buscar um valor
Node* buscar(Lista* lista, int valor){
    Node* temp = lista->inicio;
    while (temp != NULL){
        if (temp->dado == valor){
            return temp; // Retorna o ponteiro para o nó encontrado
        }
        temp = temp->prox;
    }
    return NULL; // Não encontrado
}

// Imprimir a lista
void imprimir(Lista* lista){
    Node* temp = lista->inicio;
    
    printf("Lista (%d elementos): ", lista->tamanho);

    while (temp != NULL){
        printf("%d -> ", temp->dado);
        temp = temp->prox;
    }
    printf("NULL\n");
}


// Imprimir a lista com recursividade
void imprimirRecursivamente(Node* dado){
    Node* temp = dado;
    if (temp != NULL){
        printf("%d -> \n", temp->dado);
        imprimirRecursivamente(temp->prox);
    }
}

// Liberar toda a memória (importante!)
void destruirLista(Lista* lista){
    Node* atual = lista->inicio;
    while (atual != NULL){
        Node* prox = atual->prox;
        free(atual);
        atual = prox;
    }
    free(lista);
}

// LISTA ENCADEADA
// cabeça → [dado|next] → [dado|next] → [dado|NULL]
int main(){
    Lista* minhaLista = criarLista();

    inserirFinal(minhaLista, 10);
    inserirFinal(minhaLista, 20);
    inserirInicio(minhaLista, 5);
    inserirPosicao(minhaLista, 15, 2);

    imprimirRecursivamente(minhaLista->inicio);
    imprimir(minhaLista); // 5 -> 10 -> 15 -> 20 -> NULL

    removerInício(minhaLista);
    imprimir(minhaLista);  // 10 -> 15 -> 20 -> NULL

    removerFinal(minhaLista);
    imprimir(minhaLista); // 10 -> 15 -> NULL

    Node* achou = buscar(minhaLista, 15);
    if (achou) printf("Encontrado: %d\n", achou->dado);

    destruirLista(minhaLista);

    return 0;
};


/*
- Vantagens da lista encadeada:
Inserção/remoção no início: O(1)
Tamanho dinâmico (não precisa definir tamanho antes)
Não desperdiça memória


- Desvantagens:
Acesso aleatório lento: O(n) para acessar o elemento i
Usa mais memória (ponteiro extra em cada nó)
*/
