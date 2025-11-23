#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include "decision_system.h"

// Hacer preguntas por consola (si/no -> 1/0)
AnswerSet ask_questions() {
    AnswerSet a = {0};
    char buf[8];
    printf("Responde si/no a las siguientes preguntas (presiona Enter despues de cada una):\n");
    
    printf("1) Necesitas acceso aleatorio rapido por indice? ");
    do {
        scanf("%7s", buf);
        // Convertir primer caracter a minuscula
        buf[0] = tolower(buf[0]);
        if (buf[0] == 's' || buf[0] == 'n') {
            a.random_access = (buf[0]=='s');
            break;
        } else {
            printf("Por favor responde solo 'si' o 'no': ");
        }
    } while (1);

    printf("2) Insercciones/eliminaciones frecuentes en medio? ");
    do {
        scanf("%7s", buf);
        buf[0] = tolower(buf[0]);
        if (buf[0] == 's' || buf[0] == 'n') {
            a.mid_insertions = (buf[0]=='s');
            break;
        } else {
            printf("Por favor responde solo 'si' o 'no': ");
        }
    } while (1);

    printf("3) Son busquedas clave->valor lo principal? ");
    do {
        scanf("%7s", buf);
        buf[0] = tolower(buf[0]);
        if (buf[0] == 's' || buf[0] == 'n') {
            a.key_value_lookup = (buf[0]=='s');
            break;
        } else {
            printf("Por favor responde solo 'si' o 'no': ");
        }
    } while (1);

    printf("4) Necesitas ordenamiento o consultas por rango? ");
    do {
        scanf("%7s", buf);
        buf[0] = tolower(buf[0]);
        if (buf[0] == 's' || buf[0] == 'n') {
            a.ordering_or_range = (buf[0]=='s');
            break;
        } else {
            printf("Por favor responde solo 'si' o 'no': ");
        }
    } while (1);

    printf("5) Se requiere acceso basado en prioridad? ");
    do {
        scanf("%7s", buf);
        buf[0] = tolower(buf[0]);
        if (buf[0] == 's' || buf[0] == 'n') {
            a.priority = (buf[0]=='s');
            break;
        } else {
            printf("Por favor responde solo 'si' o 'no': ");
        }
    } while (1);

    printf("6) Son las relaciones tipo grafo? ");
    do {
        scanf("%7s", buf);
        buf[0] = tolower(buf[0]);
        if (buf[0] == 's' || buf[0] == 'n') {
            a.graph_like = (buf[0]=='s');
            break;
        } else {
            printf("Por favor responde solo 'si' o 'no': ");
        }
    } while (1);

    return a;
}

Recommendation decide(AnswerSet answers) {
    Recommendation r;
    memset(&r,0,sizeof(r));
    // Orden de reglas (deterministico)
    if (answers.graph_like) {
        strcpy(r.name, "Grafo (Lista de Adyacencia)");
        strcpy(r.rationale, "Los grafos representan nodos con aristas arbitrarias; las listas de adyacencia son eficientes para grafos dispersos.");
        strcpy(r.alternatives[0], "Matriz de Adyacencia (si es denso)");
    } else if (answers.key_value_lookup) {
        strcpy(r.name, "Tabla Hash");
        strcpy(r.rationale, "Las tablas hash dan busquedas clave->valor O(1) promedio; usa encadenamiento para colisiones.");
        strcpy(r.alternatives[0], "BST Balanceado (claves ordenadas)");
    } else if (answers.priority) {
        strcpy(r.name, "Monticulo / Cola de Prioridad");
        strcpy(r.rationale, "Los monticulos permiten insercion y extraccion-maximo/extraccion-minimo eficientes en tiempo O(log n).");
        strcpy(r.alternatives[0], "BST Balanceado (si se necesita busqueda+orden)");
    } else if (answers.ordering_or_range) {
        strcpy(r.name, "Arbol Binario de Busqueda (BST)");
        strcpy(r.rationale, "Los BST mantienen el orden y soportan consultas por rango; usa variantes balanceadas para garantias en el peor caso.");
        strcpy(r.alternatives[0], "Arreglo ordenado (si pocas actualizaciones)");
    } else if (answers.random_access && !answers.mid_insertions) {
        strcpy(r.name, "Arreglo Dinamico");
        strcpy(r.rationale, "Los arreglos dinamicos proveen acceso aleatorio O(1) y push_back amortizado O(1).");
        strcpy(r.alternatives[0], "Lista Enlazada Simple (si memoria critica)");
    } else if (answers.mid_insertions) {
        strcpy(r.name, "Lista Doblemente Enlazada");
        strcpy(r.rationale, "Las listas doblemente enlazadas permiten insertar/eliminar O(1) dados punteros a nodos; buenas cuando hay muchas actualizaciones en medio de la lista.");
        strcpy(r.alternatives[0], "Lista Enlazada Simple");
    } else {
        strcpy(r.name, "Cola");
        strcpy(r.rationale, "El procesamiento FIFO es comun; una cola es un valor por defecto seguro para tareas secuenciales.");
    }
    return r;
}