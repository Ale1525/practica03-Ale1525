#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_DIRECTORES 10

typedef struct pelicula {
    char *titulo;
    char *genero;
    int anio;
    int numDirectores;
    char *directores[MAX_DIRECTORES];
} Pelicula;

/* Crear función auxiliar para copiar cadenas usando malloc + strcpy*/
char* copiarCadena(const char* texto) {
    char *copia = (char*)malloc(strlen(texto) + 1); // +1 para el terminador
    if (copia != NULL) {
        strcpy(copia, texto);
    }
    return copia;
}

/* Crear película */
Pelicula* crearPelicula(const char* titulo, int anio, const char* genero) {
    Pelicula *p = (Pelicula*)malloc(sizeof(Pelicula));
    if(p != NULL) {
        p->titulo = copiarCadena(titulo);
        p->genero = copiarCadena(genero);
        p->anio = anio;
        p->numDirectores = 0; //Aun no hay directores, se inicializa en 0
    }
    return p;
}

/* Imprimir película */
void imprimir(Pelicula* p) {
    printf("Titulo: %s\n", p->titulo);
    printf("Año: %d\n", p->anio);
    printf("Genero: %s\n", p->genero);
    printf("Directores: %d\n", p->numDirectores);
}

/* Cambiar género */
void cambiarGenero(Pelicula* p, const char* nuevoGenero) {
    if(p != NULL) {
        free(p->genero); // Liberar el genero anterior
        p->genero = copiarCadena(nuevoGenero); // Copiar nuevoGenero
        printf("Genero cambiado a: %s\n", p->genero);
    }
}

/* Agregar director */
void agregarDirector(Pelicula* p, const char* director) {
    if(p != NULL && p->numDirectores < MAX_DIRECTORES) {
        p->directores[p->numDirectores] = copiarCadena(director);
        p->numDirectores++;
    } else printf("Son solo 10 directores MAX\n");
}

/* Liberar memoria */
void destruir(Pelicula* p) {
    if(p != NULL) {
        free(p->titulo);
        free(p->genero);
        for(int i = 0; i < p->numDirectores; i++) {
            free(p->directores[i]);
        }
        free(p);
    }
}