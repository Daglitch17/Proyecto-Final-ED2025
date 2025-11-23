#include <stdio.h>
#include <string.h>
#include "visualizer.h"

void visualize(const char *name) {
    if (strstr(name, "Arreglo") || strstr(name, "Arreglo Dinamico")) {
        printf("indice: 0 1 2 3\n");
        printf("Arreglo: [10] [20] [30] [40]\n");
    } else if (strstr(name, "Lista Enlazada")) {
        printf("CABEZA -> [3] -> [7] -> [9] -> NULL\n");
    } else if (strstr(name, "arbol Binario de Busqueda") || strstr(name, "BST")) {
        printf("   [8]\n");
        printf("  /   \\\n");
        printf("[3]   [10]\n");
    } else if (strstr(name, "Monticulo")) {
        printf("     [50]\n");
        printf("    /   \\\n");
        printf("  [30]  [20]\n");
    } else if (strstr(name, "Tabla Hash")) {
        printf("Cubetas:\n");
        printf("0: [null]\n1: [claveA->valor]\n2: [claveB->valor]\n");
    } else if (strstr(name, "Grafo")) {
        printf("Nodo A: -> B, C\nNodo B: -> C\nNodo C: -> A\n");
    } else {
        printf("Frente de la cola -> [a] -> [b] -> [c] -> final\n");
    }
}