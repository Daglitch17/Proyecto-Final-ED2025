#include <stdio.h>
#include <string.h>
#include "examples.h"

void print_example(const char *name) {
    if (strstr(name, "Monticulo") || strstr(name, "Prioridad")) {
        printf("Ejemplo: Planificacion de tareas por prioridad.\nEntrada: (A,3),(B,1),(C,5)\nOperaciones:\n  Insertar A(3), B(1), C(5) en max-monticulo.\nOrden de extraccion: C, A, B\n");
    } else if (strstr(name, "Tabla Hash")) {
        printf("Ejemplo: conteo de palabras usando tabla hash: insertar palabras, incrementar conteos, recuperar conteos.\n");
    } else if (strstr(name, "arbol Binario de Busqueda")) {
        printf("Ejemplo: Mantener un conjunto ordenado de enteros para consultas por rango. Insertar claves, luego recorrer en orden.\n");
    } else {
        printf("Ejemplo: Cola simple para procesar tareas en orden FIFO.\n");
    }
}