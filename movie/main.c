#include <stdio.h>
#include "pelicula.h"

int main()
{
    printf("Prueba del TAD Pelicula\n");

    /* Crear una película */
    Pelicula* p = crearPelicula("The Matrix", 1999, "Ciencia Ficcion");

    /* Agregar algunos directores */
    agregarDirector(p, "Lana Wachowski");
    agregarDirector(p, "Lilly Wachowski");

    /* Imprimir película */
    imprimir(p);

    printf("\nCambiar genero\n");

    /* Cambiar genero */
    cambiarGenero(p, "Accion");

    /* Imprimir nuevamente */
    imprimir(p);

    /* Liberar memoria */
    destruir(p);
    p = NULL;

    return 0;
}