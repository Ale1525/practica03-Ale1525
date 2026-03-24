#ifndef __PELICULA_H_
#define __PELICULA_H_

#define MAX_DIRECTORES 10

typedef struct pelicula {
    char *titulo;
    char *genero;
    int anio;
    int numDirectores;
    char *directores[MAX_DIRECTORES];
} Pelicula;

/*Copiar una cadena usando malloc y strcpy*/
char* copiarCadena(const char* texto);

/* Crear una película */
Pelicula* crearPelicula(const char* titulo, int anio, const char* genero);

/* Imprimir información de la película */
void imprimir(Pelicula* p);

/* Cambiar el género */
void cambiarGenero(Pelicula* p, const char* nuevoGenero);

/* Agregar un director */
void agregarDirector(Pelicula* p, const char* director);

/* Liberar memoria */
void destruir(Pelicula* p);

#endif
