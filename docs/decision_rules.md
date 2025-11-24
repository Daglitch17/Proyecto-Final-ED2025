# Reglas de decisión

Las reglas se aplican de forma determinista en orden; se selecciona la primera regla que coincida.

1. IF graph_like = yes => Gráfico (lista de adyacencia)
2. ELSE IF key_value_lookup = yes => Tabla hash
3. ELSE IF priority = yes => Montón / Cola de prioridad
4. ELSE IF ordering_or_range = yes => Árbol de búsqueda binario (BST)
5. ELSE IF random_access = sí AND mid_insertions = no => Matriz dinámica
6. ELSE IF mid_insertions = sí => Lista doblemente enlazada
7. ELSE => Cola (predeterminado)

Cada regla tiene una breve justificación en el código `decision_system.c`.
