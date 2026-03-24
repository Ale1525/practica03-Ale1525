#ifndef __NODO_H__
#define __NODO_H__

typedef struct Nodo {
  int valor;
} Nodo;

Nodo* crearNodo(int valor);
int obtenerValor(const Nodo* nodo);
void asignarValor(Nodo* nodo, int valor);
void destruirNodo(Nodo* nodo);

#endif
