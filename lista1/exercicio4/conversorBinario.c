#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

typedef struct no_st{
    int no;
    struct no_st* prox;
}no;

typedef struct pilhaDinamica_st{
    no *topo;
    int qntd;
}pilhaDinamica;

void init(pilhaDinamica *p){
    p->topo = NULL;
    p->qntd = 0;
}

int size(pilhaDinamica p){
    return (p.qntd);
}

bool stackEmpty(pilhaDinamica p){
    if(p.qntd == 0) {
    return(true);
    }
}

void push(pilhaDinamica *p, int ch){
    no* aux=NULL;
    aux = (no*)malloc(sizeof(no));
    aux->no=ch;
    aux->prox=p->topo;
    p->topo=aux;
    p->qntd++;
}

void pop(pilhaDinamica *p){
    no *aux;
    aux = p->topo;
    p->topo = p->topo->prox;
    free(aux);
    p->qntd--;
}

void destroy(pilhaDinamica *p){
    while (p->qntd != 0){
        pop(p);
    }
}

int binario(){

}

int main(void){
    pilhaDinamica p;
    init(&p);
    int n;
    printf("Digite um numero: ");
    scanf("%d", &n);

}