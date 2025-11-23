#include <stdio.h>
#include <string.h>
#include "pseudocode.h"

void print_pseudocode(const char *name) {
    if (strstr(name, "arbol Binario de Busqueda") || strstr(name, "BST")) {
        printf("INSERTAR(x):\n  si raiz==NULL entonces raiz=x sino recursar al hijo correcto.\nComplejidad: O(h) donde h es la altura del arbol.\n");
        printf("BUSCAR(x):\n  recorrer comparando con nodo->clave. Complejidad: O(h)\n");
    } else if (strstr(name, "Tabla Hash")) {
        printf("PONER(k,v): idx = hash(k); insertar en cubeta; Promedio: O(1)\nOBTENER(k): idx = hash(k); encontrar en cubeta; Promedio: O(1)\n");
    } else if (strstr(name, "Monticulo")) {
        printf("INSERTAR: colocar en siguiente hoja; subir. O(log n)\nEXTRAER_MAXIMO: intercambiar raiz con ultimo; bajar. O(log n)\n");
    } else if (strstr(name, "Lista Enlazada")) {
        printf("INSERTAR_DESPUeS(nodo,x): asignar nuevo; ajustar punteros. O(1) si se conoce el nodo.\nBUSCAR: O(n)\n");
    } else if (strstr(name, "Arreglo Dinamico")) {
        printf("PUSH_BACK(x): si capacidad llena, redimensionar (duplicar). Amortizado O(1)\nACCEDER(i): O(1)\n");
    } else {
        printf("ENCOLAR: empujar al final. DESENCOLAR: sacar del frente. O(1)\n");
    }
}