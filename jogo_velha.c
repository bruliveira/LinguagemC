#include <stdio.h>
#include <stdlib.h>

struct aluno {
    int matricula;
    char nome[50];
    float av1, av2, pr;
};

typedef struct elemento *Lista;

Lista* criar();
void destruir(Lista *);
int tamanho(Lista *);
int vazia(Lista *);
int inserir_fim(Lista *, struct aluno);
int inserir_inicio(Lista *, struct aluno);
int inserir_meio(Lista *, struct aluno);
int remover_fim(Lista *);
int remover_inicio(Lista *);
int remover_meio(Lista *, int);
int acessar_indice(Lista *, int, struct aluno *);
int acessar_valor(Lista *, int, struct aluno *);

struct elemento{
    struct aluno dados;
    struct elemento *prox;
};

typedef struct elemento Elemento;

Lista* criar() {
    Lista *lis;
    lis = (Lista*)malloc(sizeof(Lista)); //Alocando memória para a posição atual da lista
    if (lis != NULL) {
        *lis = NULL;
    }
    return lis;
}
void destruir(Lista *lis){
    if (lis != NULL){
        Elemento *aux;
        while (*lis != NULL){
            aux = *lis;
            *lis = (*lis)->prox;
            free(aux);
        }
        free(lis);
    }
}
int inserir_inicio(Lista *lis, struct aluno novosdados){
    if (lis == NULL){
        return 0;
    }
    else{
        Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
        if (novo == NULL)
          return 0;
        novo->dados = novosdados;
        novo->prox = *lis;
        *lis = novo;
        return 1;
    }
}
int inserir_meio(Lista *lis, struct aluno novosdados){
    if (lis == NULL){
        return 0;
    }
    else {
        Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
        if (novo == NULL) return 0;
        novo->dados = novosdados;
        if (vazia(lis) || (*lis)->dados.matricula > novo->dados.matricula){
            novo->prox = *lis;
            *lis = novo;
        }
        else{
            Elemento *ant = *lis;
            Elemento *aux = ant->prox;
            while (aux != NULL && aux->dados.matricula < novo->dados.matricula){
                ant = aux;
                aux = aux->prox;
            }
            ant->prox = novo;
            novo->prox = aux;
        }
        return 1;
    }
}
int inserir_fim(Lista *lis, struct aluno novosdados){
    if (lis == NULL){
        return 0;
    }
    else {
        Elemento *novo = (Elemento*)malloc(sizeof(Elemento));
        if (novo == NULL)
          return 0;
        novo->dados = novosdados;
        novo->prox = NULL;
        if (vazia(lis)){
            *lis = novo;
        }
        else{
            Elemento *aux = *lis;
            while (aux->prox != NULL) aux = aux->prox;
            aux->prox = novo;
        }
        return 1;
    }
}
int remover_inicio(Lista *lis){
    if (vazia(lis)) {
        return 0;
    }
    else {
        Elemento *aux = *lis;
        *lis = aux->prox;
        free(aux);
        return 1;
    }
}
int remover_meio(Lista *lis, int x){
    if (vazia(lis)) {
        return 0;
    }
    else if ((*lis)->dados.matricula == x){
        Elemento *aux = *lis;
        *lis = aux->prox;
        free(aux);
        return 1;
    }
    else {
        Elemento *ant = *lis;
        Elemento *aux = ant->prox;
        while (aux != NULL && aux->dados.matricula != x){
            ant = aux;
            aux = aux->prox;
        }
        if (aux == NULL) return 0;
        ant->prox = aux->prox;
        free(aux);
        return 1;
    }
}
int remover_fim(Lista *lis){
    if (vazia(lis)) {
        return 0;
    }
    else if ((*lis)->prox == NULL){
        Elemento *aux = *lis;
        *lis = aux->prox;
        free(aux);
        return 1;
    }
    else{
        Elemento *ant = *lis;
        Elemento *aux = ant->prox;
        while (aux->prox != NULL){
            ant = aux;
            aux = aux->prox;
        }
        ant->prox = aux->prox;
        free(aux);
        return 1;
    }
}
int acessar_indice(Lista *lis, int pos, struct aluno *a){
    if (vazia(lis))
        return 0;
    else if (pos < 0)
        return 0;
    else {
        int cont = 0;
        Elemento *aux = *lis;
        while (aux != NULL && pos != cont){
            aux = aux->prox;
            cont++;
        }
        if (aux == NULL)
          return 0;
        *a = aux->dados;
        return 1;
    }
}
int acessar_valor(Lista *lis, int x, struct aluno *a){
    if (vazia(lis))
        return 0;
    else {
        Elemento *aux = *lis;
        while (aux != NULL && aux->dados.matricula != x){
            aux = aux->prox;
        }
        if (aux == NULL)
          return 0;
        *a = aux->dados;
        return 1;
    }
}
int tamanho(Lista *lis){
    if (vazia(lis)){
        return 0;
    }
    int cont = 0;
    Elemento *aux = *lis;
    while (aux != NULL){
        cont++;
        aux = aux->prox;
    }
    return cont;
}
int cheia(Lista *lis){
    return 0;
}
int vazia(Lista *lis){
    if (lis == NULL){
        return 1;
    }
    else if (*lis == NULL){
        return 1;
    }
    else{
        return 0;
    }
}



int main(){
  int escolha;

  printf("\n\t---------- Lista Dinâmica Simplesmente Encadeada ----------\n");
  printf("\nOlá, por favor, digite a opção desejada: \n");
  printf("\na - Criar lista vazia");
  printf("\n1 - Inserir no Inicio");
  printf("\n2 - Inserir no Meio");
  printf("\n3 - Inserir no Fim");
  printf("\n4 - Remover no Inicio");
  printf("\n5 - Remover no Meio");
  printf("\n6 - Remover no Fim");

  printf("\nOpção desejada: ");
  scanf("%d", &escolha);




}