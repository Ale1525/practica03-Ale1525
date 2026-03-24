#include <stdio.h>
#include "fraccion.h"

int main() {
    Fraccion f1 = crearfraccion(4, 8);
    printf("Fraccion 1: ");
    imprimir(&f1);

    printf("\n2. Intentando crear una fraccion con den = 0:\n");
    Fraccion f_error = crearfraccion(5, 0);
    printf("Fraccion 2: ");
    imprimir(&f_error);

    printf("\n3. Sumando 1/2 + 1/4 (debe mostrar 3/4):\n");
    Fraccion a = crearfraccion(1, 2);
    Fraccion b = crearfraccion(1, 4);
    Fraccion resultado = suma(&a, &b);
    printf("Resultado de la suma: ");
    imprimir(&resultado);

    printf("\n4. Sumando 1/2 + 1/2 (debe mostrar 1/1):\n");
    Fraccion c = crearfraccion(1, 2);
    Fraccion d = crearfraccion(1, 2);
    Fraccion resultado2 = suma(&c, &d);
    printf("Resultado de la suma: ");
    imprimir(&resultado2);

    return 0;
}