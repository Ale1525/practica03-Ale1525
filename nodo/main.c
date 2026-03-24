#include <stdio.h>
#include "Nodo.h"

int main() {
    Nodo *n;
    n = crearNodo(30);
    printf("Valor del nodo: %d\n", obtenerValor(n));
    asignarValor(n, 45);
    printf("Valor del nodo es: %d\n", obtenerValor(n));
    destruirNodo(n);
    n = NULL; 
    (n == NULL) ? printf("Nodo liberado correctamente.\n") : printf("Error al liberar el nodo.\n");
    return 0;
}