#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

// Estrutura do nó da Árvore Binária de Busca
typedef struct Node{
    int data;           // Valor Armazenado no nó
    struct Node *left;  // Ponteiro para o filho esquerdo
    struct Node *right; // Ponteiro para o filho direito
} Node;


// Cria um novo nó com o valor informado
Node* createNode(int data){
    Node* newNode = (Node*)malloc(sizeof(Node));

    if (newNode == NULL){
        printf("Erro: falha na alocação de memória\n");
        exit(1);
    }

    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insere um novo valor na ABB (Mantém esq < nó < dir)
Node* insert(Node* root, int data){
    if (root == NULL){
        return createNode(data);
    }

    if (data < root->data){
        root->left = insert(root->left, data);
    } else if (data > root->data){
        root->right = insert(root->right, data);
    }

    // Duplicatas são ignoradas (pode ser alterado se quiser permitir)
    return root;
}

// Busca um valor na árvore
Node* search(Node* root, int data){
    if (root == NULL || root->data == data){
        return root;
    }

    if (data < root->data){
        return search(root->left, data);
    }

    return search(root->right, data);
}

// Encontra o nó com o menor valor (mais á esquerda)
Node* findMin(Node* node){
    while (node && node->left != NULL){
        node = node->left;
    }
    return node;
}

// Remove um nó da árvore (Casos: 0, 1 ou 2 filhos)
Node* deleteNode(Node* root, int data){
    if (root == NULL) return root;

    if (data < root->data){
        root->left = deleteNode(root->left, data);
    } else if (data > root->data){
        root->right = deleteNode(root->right, data);
    } else {
        // Nó encontrado!

        // Caso 1: sem filho esquerdo (ou folha)
        if (root->left == NULL){
            Node* temp = root->right;
            free(root);
            return temp;
        }

        // Caso 2: sem filho direito
        else if (root->right == NULL){
            Node* temp = root->left;
            free(root);
            return temp;
        }

        // Caso 3: dois filhos -> usa o sucessor in-ordem
        Node* sucessor = findMin(root->right);
        root->data = sucessor->data;                           // Copia o valor
        root->right = deleteNode(root->right, sucessor->data); // Remove o sucessor
    }

    return root;
}

// Percursos clássicos
void inorder(Node* root){    // Esquerda -> Raiz -> Direita (order crescente)
    if (root != NULL){
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(Node* root){   // Raiz -> Esquerda -> Direita
    if (root != NULL){
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root){
    if (root != NULL){
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Calcula a altura da árvore (-1 para árvore vazia)
int height(Node* root){
    if (root == NULL) return -1;

    int leftH = height(root->left);
    int rightH = height(root->right);

    return (leftH > rightH ? leftH : rightH) + 1;
}

// Libera toda a memória da árvore (pós-ordem)
void freeTree(Node* root){
    if (root != NULL){
        freeTree(root->left);
        freeTree(root->right);
        free(root);
    }
}

int main(void){
    Node* root = NULL;
    
    printf("=== Árvore Binária de Busca em C ===\n\n");

    // Inserindo valores
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Percurso em-ordem (deve estar ordenado): ");
    inorder(root);
    printf("\n\n");

    printf("Buscando 40: %s\n", search(root, 40) ? "Encontrado" : "Não encontrado");
    printf("Buscando 55: %s\n", search(root, 55) ? "Encontrado" : "Não encontrado");

    printf("Removendo o nó 20...\n");
    root = deleteNode(root, 20);

    printf("Percurso em-ordem após remoção: ");
    inorder(root);
    printf("\n\n");

    printf("Altura da árvore: %d\n", height(root));

    // Sempre liberar a memória!
    freeTree(root);

    printf("\nÁrvore liberada com sucesso. Programa finalizado. \n");
    return 0;
}