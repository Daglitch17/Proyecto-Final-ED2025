# 📘 **Sistema de Decisión para Estructuras de Datos — Proyecto Final (C)**

**Estructuras de Datos - 2025 - UDLAP **

**Autores:** *Patricio K., Maximiliano C., Juan A., Emilio L.*

**Lenguaje:** C

**Compilador recomendado:** GCC (MinGW / MSYS2 / Linux / Mac)


#  **1. Introducción**

Este proyecto implementa un **Sistema Guiado de Selección de Estructuras de Datos**, cuya finalidad es recomendar al usuario la estructura de datos más adecuada según un conjunto de respuestas proporcionadas a un cuestionario breve.

El sistema fue desarrollado cumpliendo con los criterios establecidos en el documento oficial del curso:
📄 *Project Instructions*:
`/docs/Project_Instructions.pdf`


#  **2. Objetivo General**

Construir un sistema completo que reciba requisitos del usuario, determine la estructura de datos más apropiada y genere:

* Una visualización ASCII de la estructura seleccionada.
* Pseudocódigo relevante para sus operaciones.
* Una explicación del razonamiento detrás de la recomendación.
* Un ejemplo práctico basado en ejercicios del curso.


#  **3. Objetivos Específicos**

* Aplicar conocimientos de **arrays, listas, colas, pilas, árboles, heaps, grafos y tablas hash**.
* Analizar requisitos y convertirlos en decisiones determinísticas.
* Elaborar reglas de decisión justificadas.
* Documentar preguntas, reglas y ejemplos del sistema.
* Implementar pruebas unitarias simples en C.
* Crear un proyecto que compile y se ejecute en cualquier plataforma.


#  **4. Requisitos del Sistema**

## **Obligatorios**

* GCC instalado (MinGW, MSYS2, Linux o Mac).
* Visual Studio Code o editor equivalente.
* Sistema operativo Windows, Linux o macOS.

## **Opcionales**

* Make (`make`) para automatizar compilación.
* Extensión C/C++ en VS Code.
* Git instalado para control de versiones.



#  **5. Estructura del Proyecto**

```
DS_Project/
│
├── README.md                  ← Este documento
├── LICENSE
├── CHANGELOG.md
│
├── docs/
│   ├── decision_questions.md
│   ├── decision_rules.md
│
├── src/
│   ├── main.c
│   ├── decision_system.c/h
│   ├── visualizer.c/h
│   ├── pseudocode.c/h
│   ├── examples.c/h
│   └── utils/
│       ├── string_utils.c/h
│
├── tests/
│   ├── test_decision_rules.c
│   ├── test_end_to_end.c
│   └── test_runner.c
│
└── example/
    ├── ejemplo_hw.txt
```



#  **6. Compilación del Programa Principal**

## **Windows (PowerShell o CMD)**

```
gcc src/*.c src/utils/*.c -o decision_system.exe
.\decision_system.exe
```

## **Linux / macOS**

```
gcc src/*.c src/utils/*.c -o decision_system
./decision_system
```



# 🖥️ **7. Ejecución del Sistema**

```
.\decision_system.exe     (Windows)
./decision_system         (Linux/Mac)
```

El programa solicitará respuestas SÍ/NO (yes/no) y generará:

* Estructura recomendada
* Alternativas
* Visualización ASCII
* Pseudocódigo
* Ejemplo práctico



# 🧪 **8. Pruebas (Tests)**

Los tests se dividen en dos archivos principales:

* `test_decision_rules.c` → verifica reglas de decisión
* `test_end_to_end.c` → prueba un caso completo
* `test_runner.c` → ejecuta ambos tests automáticamente



## ✔️ **Compilar y correr cada test manualmente**

### **Test 1**

```
gcc tests/test_decision_rules.c src/decision_system.c -I./src -o t1.exe
.\t1.exe
```

### **Test 2**

```
gcc tests/test_end_to_end.c src/decision_system.c -I./src -o t2.exe
.\t2.exe
```

## ✔️ **Verificar resultado**

En PowerShell:

```
echo $LASTEXITCODE
```

* `0` = test aprobado
* `1` = test falló


#  **Test Runner (recomendado)**

```
gcc tests/test_runner.c -o test_runner.exe
.\test_runner.exe
```

El runner automáticamente:

1. Compila `t1.exe`
2. Ejecuta `t1.exe`
3. Compila `t2.exe`
4. Ejecuta `t2.exe`
5. Reporta resultados

Aquí tienes una **sección lista para copiar y pegar** en tu README, completamente formateada y con los comandos correctos para **Linux**, siguiendo tu mismo estilo.

---

# 🧪 **Cómo correr los tests en Linux**

Los tests del proyecto pueden ejecutarse fácilmente desde la terminal de Linux utilizando GCC. A continuación se muestran los comandos exactos para compilar y ejecutar cada prueba.

---

## **Test 1 — test_decision_rules.c**

Compilar:

```bash
gcc tests/test_decision_rules.c src/decision_system.c src/utils/*.c -I./src -o t1
```

Ejecutar:

```bash
./t1
```

---

## **Test 2 — test_end_to_end.c**

Compilar:

```bash
gcc tests/test_end_to_end.c src/decision_system.c src/utils/*.c -I./src -o t2
```

Ejecutar:

```bash
./t2
```

---

##  **Verificar el resultado de cada test**

Después de ejecutar cualquier test:

```bash
echo $?
```

Interpretación:

* `0` → Test aprobado
* `1` → Test falló

---

#  **10. Notas importantes para Windows**

* En PowerShell NO se usa `./programa` como en Linux.
  Se usa:

```
.\programa.exe
```

* Si PowerShell bloquea ejecución:

```
Set-ExecutionPolicy -Scope Process Bypass
```
