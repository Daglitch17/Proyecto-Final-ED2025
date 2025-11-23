# Gestión de Paradas de un Bus en Ciclo

## Problema del Examen Parcial 2

Un campus tiene un bus que recorre paradas en ciclo.\
El despachador necesita realizar las siguientes operaciones:

-   Avanzar a la siguiente parada\
-   Insertar paradas nuevas\
-   Eliminar paradas actuales

**Todas las operaciones deben ser rápidas.**

------------------------------------------------------------------------

## Estructura Elegida: Lista Enlazada Circular

### ¿Por qué?

-   Inserción y eliminación son **O(1)** en la posición actual.\
-   El ciclo es natural: la última parada apunta a la primera.\
-   No es necesario recorrer toda la lista para operaciones básicas.

------------------------------------------------------------------------

## Operaciones Principales

### `Avanzar()`

``` plaintext
Avanzar():
    actual = actual.siguiente
```

### `Insertar(parada)`

``` plaintext
Insertar(parada):
    nueva_parada.siguiente = actual.siguiente
    actual.siguiente = nueva_parada
```

### `Eliminar()`

``` plaintext
Eliminar():
    actual.siguiente = actual.siguiente.siguiente
```

------------------------------------------------------------------------

## Ejemplo Práctico

### Inicio:

A → B → C → (vuelve a A)

### Avanzar:

Actual va de **A** a **B**

### Insertar X:

A → B → X → C → (A)

### Eliminar B:

A → X → C → (A)

### Resultado final:

**A → X → C → (A)**\
Ciclo completo

------------------------------------------------------------------------

## Conclusión

-   Ideal para recorridos circulares continuos\
-   Operaciones instantáneas sin importar cuántas paradas existan\
-   Escala bien: mantiene el rendimiento con 10, 100 o 1000 paradas
