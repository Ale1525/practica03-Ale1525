#include <stdio.h>
#include <stdlib.h>
#include "fraccion.h"

Fraccion crearfraccion(int numerador, int denominador) {
    if(denominador == 0) {
        printf("No existen fracciones con denominador 0\n");
        denominador = 1; // Asignar un valor por defecto para evitar división por cero
    }
    Fraccion f;
    f.numerador = numerador;
    f.denominador = denominador;
    return simplificar(&f);
}

Fraccion simplificar(Fraccion *a) {
    int num = a->numerador;
    int den = a->denominador;
    int mcd = 1;
    for (int i = 1; i <= num && i <= den; i++) {
        if (num % i == 0 && den % i == 0) {
            mcd = i;
        }
    }
    Fraccion resultado;
    resultado.numerador = num / mcd;
    resultado.denominador = den / mcd;
    return resultado;
}

Fraccion suma(Fraccion *a, Fraccion *b) {
    Fraccion resultado;
    resultado.numerador = a->numerador * b->denominador + a->denominador * b->numerador;
    resultado.denominador = a->denominador * b->denominador;
    return simplificar(&resultado);
}

void imprimir(Fraccion *a) {
    (a->denominador == 0)? printf("No existen fracciones con denominador 0\n") : printf("%d/%d\n", a->numerador, a->denominador);
}

void eliminar(Fraccion *a) {
    if(a != NULL) {
        free(a);
        a = NULL;
    }
}