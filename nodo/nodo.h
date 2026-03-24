#ifndef __NODO_H__
#define __NODO_H__

typedef struct Nodo{
    int valor;
} Nodo;

Nodo* crearNodo(int valor);
int obtenerValor( const Nodo *n);
void asignarValor(Nodo *n, int valor);
void destruirNodo(Nodo *n);

#endif
