#ifndef _FRACCION_H_
#define _FRACCION_H_

typedef struct fraccion {
    int numerador;
    int denominador;
} Fraccion;

Fraccion crearfraccion(int numerador, int denominador);
Fraccion simplificar(Fraccion *a);
Fraccion suma(Fraccion *a, Fraccion *b);
void imprimir(Fraccion *a);
void eliminar(Fraccion *a);

#endif /* _FRACCION_H_ */
