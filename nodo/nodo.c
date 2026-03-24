#include <stdio.h>
#include <stdlib.h>
#include "nodo.h"
#include <string.h>

Nodo *crearNodo(int valor){
    Nodo *n = (Nodo *)malloc(sizeof(Nodo));
    if (n != NULL){
        n->valor = valor;
    }
    return n;
}

int obtenerValor(const Nodo *n){
    if (n != NULL){
        return n->valor;
    }
    return -1;
}

void asignarValor(Nodo *n, int valor){
    if(n !=NULL){
        n->valor = valor;
    }
}

void destruirNodo(Nodo *n){
    if(n != NULL){
        free(n);
    }
}